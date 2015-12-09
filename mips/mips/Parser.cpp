#include "parser.h"
regex hex_reg = regex("(0x)([0-9A-Fa-f]+)");
regex dec_reg = regex("(0d){0,1}([0-9]+)");
immediateType resolveImmediate(const string& strImmediate, bool signExtend)
{
	smatch results;
	unsigned __int16 imm16;
	if (regex_match(strImmediate, hex_reg))
	{
		regex_search(strImmediate, results, hex_reg);
		stringstream ss(results[2]);
		ss >> hex >> imm16;
	}
	else if (regex_match(strImmediate, dec_reg))
	{
		regex_search(strImmediate, results, dec_reg);
		stringstream ss(results[2]);
		ss >> imm16;
	}
	else
	{
		throw invalid_argument("Invalid immediate: Unable to parse the immediate field");
	}
	if (signExtend)
	{
		return (int(__int16(imm16)));
	}
	else
	{
		return unsigned int(unsigned __int16(imm16));
	}
}
immediateType resolveJImmediate(const string& strImmediate)
{
	smatch results;
	int jAddr;
	if (regex_match(strImmediate, hex_reg))
	{
		regex_search(strImmediate, results, hex_reg);
		stringstream ss(results[2]);
		ss >> hex >> jAddr;
	}
	else if (regex_match(strImmediate, dec_reg))
	{
		regex_search(strImmediate, results, dec_reg);
		stringstream ss(results[2]);
		ss >> jAddr;
	}
	else
	{
		throw invalid_argument("Invalid immediate: Unable to parse the immediate field");
	}
	return jAddr;
}
inst* parseInstruction(const string& instString, const vector<regex>& instRules, int address)
{
	if (!verifyInstruction(instString, instRules))
		throw invalid_argument("Cannot parse an invalid instruction");
	smatch params;
	for (const auto& instRule : instRules)
	{
		regex_search(instString, params, instRule);
		if (!params.empty())
		{
			break;
		}
	}
	//Now, we will do a must-do cases, I know, you know it sucks, even this plastic debugging duck knows it!
	//transform(params[1].begin(), params[1].end(), params[1].begin(), toupper);
	string instName = params[1];
	for (char& iii: instName)
	{
		toupper(iii);
	}
	//R-Type instructions
	if (instName.compare(string("ADD")) == 0 || instName == "XOR" || instName == "SLT")
	{
		int rs = stoi(params[3]);
		int rt = stoi(params[4]);
		int rd = stoi(params[2]);
		if (instName.compare(string("ADD")) == 0)
		{
			return new Add(rd, rs, rt, address, instString);
		}
		else if (instName == "XOR")
		{
			return new Xor(rd, rs, rt, address, instString);
		}
		else if (instName == "SLT")
		{
			return new Slt(rd, rs, rt, address, instString);
		}
	}
	//I-Type Instructions

	else if (instName == "ADDI" | instName == "LW" | instName == "SW" | instName == "BLE")
	{
		int rt = stoi(params[2]);
		int rs = stoi(params[3]);
		immediateType immediate = resolveImmediate(params[4]);
		if (instName == "ADDI")
		{
			return new Addi(rt, rs, immediate, address, instString);
		}
		if (instName == "LW")
		{
			return new Lw(rt, rs, immediate, address, instString);
		}
		else if (instName == "SW")
		{
			return new Sw(rt, rs, immediate, address, instString);
		}
		else if (instName == "BLE")
		{
			return new Ble(rs, rt, immediate, address, instString);
		}
	}
	else if (instName == "JR")
	{
		return new Jr(stoi(params[2]));
	}
	else if (instName == "J" | instName == "JAL" || instName == "JMP")
	{
		immediateType jAddr = resolveJImmediate(params[2]);
		if (instName == "J")
		{
			return new J(jAddr, address, instString);
		}
		else if (instName == "JAL")
		{
			return new Jal(jAddr, address, instString);
		}
		else if (instName == "JMP")
		{
			return new Jmp(jAddr, address, instString);
		}
	}
	else if (instName == "RET")
	{
		return new Ret(address, instString);
	}
	else
	{
		throw logic_error("Unrecognized Instruction: Instruction was unrecognized as part of the ISA: " + to_string(address));
	}
	throw logic_error("Reached end of function, no suitable return");
}
bool verifyInstruction(const string& instString, const vector<regex>& instRules)
{
	for (const auto& rule : instRules)
	{
		if (regex_match(instString, rule))
			return true;
	}
	return false;
}
#include "Parser.h"



inst parseInstruction(const string& instString, const vector<regex>& instRules)
{
	if (!verifyInstruction(instString, instRules))
		throw invalid_argument("Cannot parse an invalid instruction");
	smatch params;
	for (const auto& instRule : instRules)
	{
		smatch temp;
		regex_search(instString, temp, instRule);
		if (!params.empty())
		{
			if (params.ready())
				throw logic_error("Amibgous instruction: Instruction parses to more than one type of instruction");
			temp = params;
		}
	}
	//Now, we will do a must-do cases, I know, you know it sucks, even this plastic debugging duck knows it!
	transform(params.begin(), params.end(), params.begin(), toupper);
	//R-Type instructions
	if (params[1] == "ADD" | params[1] == "XOR" | params[1] == "SLT")
	{
		int rs = stoi(params[3]);
		int rt = stoi(params[4]);
		int rd = stoi(params[2]);
		if (params[1] == "ADD")
		{
			return Add(rs, rt, rd);
		}
		else if (params[1] == "SLT")
		{
			return Xor(rs, rt, rd);
		}
		else if (params[1] == "SLT")
		{
			return Slt(rs, rt, rd);
		}
	}
	//I-Type Instructions

	else if (params[1] == "ADDI" | params[1] == "LW" | params[1] == "SW" | params[1] == "BLE")
	{
		int rt = stoi(params[2]);
		int rs = stoi(params[3]);
		immediateType immediate = resolveImmediate(params[4]);
		if (params[1] == "LW")
		{
			return Lw(rt, rs, immediate);
		}
		else if (params[1] == "SW")
		{
			return Sw(rt, rs, immediate);
		}
		else if (params[1] == "BLE")
		{
			return BLE(rt, rs, immediate);
		}
	}
	else if (params[1] == "JR")
	{
		return Jr(stoi(params[2]));
	}
	else if (params[1] == "J" | params[1] == "JAL" || params[1] == "JMP")
	{
		immediateType jAddr = resolveImmediate(params[2]);
		if (params[1] == "J")
		{
			return J(jAddr);
		}
		else if (params[1] == "JAL")
		{
			return Jal(jAddr);
		}
		else if (params[1] == "JMP")
		{
			return Jmp(jAddr);
		}
	}
	else if (params[1] == "RET")
	{
		return Ret();
	}
	else
	{
		throw logic_error("Unrecognized Instruction: Instruction was unrecognized as part of the ISA");
	}
}
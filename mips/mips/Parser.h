#pragma once
#include "instructions.h"
#include <regex>
#include <sstream>
#include <string>
#include <ios>
#include <iomanip>
#include <algorithm>
typedef unsigned int immediateType;

using namespace std;

enum class instGenericType
{
	rType,
	iType,
	jType,
	jrType,
	retType,
	noOps,
	numTypes
};
constexpr int instTypeCount = int(instGenericType::numTypes);

//A function that resolves the immediate field
immediateType resolveImmediate(const string& strImmediate, bool signExtend = false);
//A function that resolves a jump immediate
immediateType resolveJImmediate(const string& strImmediate);


/*
Verify that a given instruction is syntactically correct
*/
bool verifyInstruction(const string&instString, const vector<regex>& instRules);
/*
Instruction rules need to be passed with same order of appearance in the enum class
Throws an exception
*/
inst* parseInstruction(const string&instString, const vector<regex>& instRules, int address);

int fileHandler(int argc, char** argv, inst** instsToFill, System::Windows::Forms::RichTextBox^ sourceField, System::Windows::Forms::RichTextBox^ resultsField);
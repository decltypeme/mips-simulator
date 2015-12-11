#pragma once
#include <string>

extern int z;
void hazardDetection();
void dealWithForwarding(int value);

struct hazardMsg 
{
	int value;
	std::string hazard;
	hazardMsg() : hazardMsg(0, "No Hazard") {}
	hazardMsg(int i, string j) : value(i) , hazard(j) {}
};
extern hazardMsg hazardMsgs[14];
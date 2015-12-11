#pragma once
#include <string>

extern int z;
void hazardDetection();
void dealWithForwarding(int value);

struct hazardMsg
	{
	int value;
	std::string hazard;
	hazardMsg(int i, std::string j) : value(i), hazard(j) {}
	hazardMsg() : hazardMsg(0, std::string("No Hazard")) {}
	};

extern hazardMsg hazardMsgs[14];
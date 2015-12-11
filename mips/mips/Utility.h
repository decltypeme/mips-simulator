#pragma once
#include "datapath.h"
#include "hazards.h"
#include "Macro.h"
#include <string>

using namespace std;
class inst;

constexpr int maxRegNumber = 31;
constexpr int dataMemSize = 16;
constexpr int instMemSize = 16;

extern int PC;
extern int registers[maxRegNumber + 1];
extern int stack_size;
extern int stack[4];
extern int data_memory[dataMemSize];
extern inst* inst_memory[instMemSize];
extern inst* pipeline[4];
extern int hazards[5];
extern string hazard_msgs[3];

struct prediction
{
	int inst_address; bool taken;
	prediction()
		:inst_address(-1), taken(0) {}
	prediction(int _inst_address, bool _taken)
		:inst_address(_inst_address), taken(_taken) {}
};
extern prediction bpt[instMemSize];

bool validateRegister(const int& reg);

int readRegister(const int& reg);

void writeRegister(const int&reg, const int& value);

int readDataMem(const int& index);

void writeDataMem(const int& index, const int& value);

void fillNops();

void initialize();

void pushtostack(int address);

int popfromstack();

int updatePC();

int predict_branch();

bool right_prediction();

prediction* getbptptr(prediction& totest, int inst_address);
#pragma once


#include "hazard_detection.h"
#include "datapath.h"

class inst;

constexpr int maxRegNumber = 31;
constexpr int dataMemSize = 16;
constexpr int instMemSize = 16;

extern int PC;
extern int registers[maxRegNumber + 1];
extern int stack_size;
extern int stack[4];
extern int data_memory[dataMemSize];
extern inst inst_memory[instMemSize];
extern inst* pipeline[4];

bool validateRegister(const int& reg);

int readRegister(const int& reg);

void writeRegister(const int&reg, const int& value);

int readDataMem(const int& index);

void writeDataMem(const int& index, const int& value);

void initialize();

void pushtostack(int address);

int popfromstack();

void proposePC(int proposedPC, const inst* instProposing);
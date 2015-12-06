
#pragma once

#include "instructions.h"
#include "hazard_detection.h"
#include "parser.h"
#include "datapath.h"

constexpr int maxRegNumber = 31;
constexpr int dataMemSize = 16;
constexpr int instMemSize = 16;

int PC = 0;
int registers[maxRegNumber + 1];
int stack_size = 0;
int stack[4];
int data_memory[dataMemSize];
inst inst_memory[instMemSize];
inst* pipeline[4];

bool validateRegister(const int& reg);

int readRegister(const int& reg);

void writeRegister(const int&reg, const int& value);

int readDataMem(const int& index);

void writeDataMem(const int& index, const int& value);

void initialize();

void pushtostack(int address);

int popfromstack();

void proposePC(int proposedPC, const inst* instProposing);
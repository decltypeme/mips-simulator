#pragma once
bool validateRegister(const int& reg);

//Add validation for inst, data memory read and write

int readRegister(const int& reg);

void writeRegister(const int&reg, const int& value);

int readDataMem(const int& index);

void writeDataMem(const int& index, const int& value);
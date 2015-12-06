#include "utility.h"
#include <stdexcept>
using namespace std;


Ret::Ret() {}

Ret::~Ret() {}

void Ret::execute() const { proposePC(popfromstack(), this); }

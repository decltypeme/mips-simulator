#include "Ret.h"
#include <stdexcept>
using namespace std;


Ret::Ret() {}

Ret::~Ret() {}

void Ret::fetch() { PC = popfromstack(); }
#include "rt.h"
#include <stdexcept>
using namespace std;

extern int popfromstack();
extern int PC;

rt::rt(){}

rt::~rt() {}

void rt::operate() { PC = popfromstack(); }

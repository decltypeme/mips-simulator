#include "ret.h"
#include <stdexcept>
using namespace std;

extern int popfromstack();
extern int PC;
extern void proposePC(int proposedPC, const inst* instProposing);

ret::ret(int instAddress):inst(instAddress) {}

ret::~ret() {}

void ret::operate() const { proposePC(popfromstack(), this); }

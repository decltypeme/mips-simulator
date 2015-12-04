#include "ret.h"
#include <stdexcept>
using namespace std;

extern int popfromstack();
extern int PC;
extern void proposePC(int proposedPC, const inst* instProposing);

ret::ret() {}

ret::~ret() {}

void ret::execute() const { proposePC(popfromstack(), this); }

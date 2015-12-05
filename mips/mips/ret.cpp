#include "Ret.h"
#include <stdexcept>
using namespace std;

extern int popfromstack();
extern int PC;
extern void proposePC(int proposedPC, const inst* instProposing);

Ret::Ret() {}

Ret::~Ret() {}

void Ret::execute() const { proposePC(popfromstack(), this); }

#include "J.h"
#include <stdexcept>
using namespace std;



J::J(int address)
	: address(address)
{
	if (!valid()) throw logic_error("Bad construction of jump instruction.");
}

J::~J() {}

void J::execute() const {  }

bool J::valid() const
{
	return (address != -1);
}

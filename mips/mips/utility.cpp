
#include <cstring>
#include <stdexcept>

class inst;
using namespace std;


int PC = 0;
int registers[32];
int stack_size = 0;
int stack[4];
int data_memory[16];
inst* inst_memory[16];
inst* pipeline[5];


void initialize()
{
	memset(registers, -1, sizeof(registers));
	memset(stack, -1, sizeof(stack));
	memset(data_memory, -1, sizeof(data_memory));
}

void pushtostack(int address)
{
	if (stack_size < 4)
	{
		stack[++stack_size] = address;
	}
	else
		throw logic_error("Stack full.");
}

int popfromstack()
{
	if (stack_size > 0)
	{
		return stack[stack_size--];
	}
	else
		throw logic_error("Stack empty.");
}

void proposePC(int proposedPC, const inst* instProposing)
{

}
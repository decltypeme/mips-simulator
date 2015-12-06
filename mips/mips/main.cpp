
#include "parser.h"

int main()
{
	initialize();

	while (true)
	{
		fetch();
		decode();
		execute();
		memory();
		write_back();
	}
}

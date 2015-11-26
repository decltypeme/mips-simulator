
#include "utility.h"

int main()
{
	initialize();
	bool flag = true;
	while (flag)
	{
		fetch();
		decode();
		execute();
		memory();
		write_back();
	}
}

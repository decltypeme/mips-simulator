
#include "utility.cpp"
#include "hazard_detection.cpp"

int main()
{
	initialize();

	while (true)
	{
		fetch();
		hazard_detection();
		decode();
		execute();
		memory();
		write_back();
	}
}

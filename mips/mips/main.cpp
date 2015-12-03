
extern void initialize();
extern void hazard_detection();
extern void fetch();
extern void decode();
extern void execute();
extern void memory();
extern void write_back();

int main()
{
	initialize();

	while (true)
	{
		fetch();
		hazard_detection();
		decode();
		hazard_detection();
		execute();
		hazard_detection();
		memory();
		hazard_detection();
		write_back();
		hazard_detection();
	}
}


class inst
{
public:
	inst();
	inst(int instAddress);
	virtual ~inst();
	virtual void operate();

protected:
	int instAddress;
	bool valid();
};

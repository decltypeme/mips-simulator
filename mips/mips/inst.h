
class inst
{
public:
	inst();
	inst(int instAddress);
	virtual ~inst();
	virtual void operate() const;
	int getinstAddress() const;
	void setinstAddress(const int instAddress);

protected:
	int instAddress;
	bool valid() const;
};

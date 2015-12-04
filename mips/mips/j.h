
#include "inst.h"

class j : public inst
{
public:
	j(int address = -1);
	virtual ~j();
	virtual void execute() const;

	int j::getaddress() const;
	void j::setaddress(const int _address);

protected:
	int address;
	virtual bool valid() const;
};

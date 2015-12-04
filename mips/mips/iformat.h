
#include "inst.h"

class iformat : public inst
{
public:
	iformat(int source = -1, int destination = -1, int immediate = 0);
	virtual ~iformat();
	virtual void operate() = 0;

	int getsource() const;
	int getdestination() const;
	int getimmediate() const;
	void setsource(const int _source);
	void setdestination(const int _destination);
	void setimmediate(const int _immediate);

protected:
	int source;
	int destination;
	int immediate;
	virtual bool valid() const;
};

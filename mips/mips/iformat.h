
#include "inst.h"

class iformat : public inst
{
public:
	iformat(int source = -1, int destination = -1, int immediate = 0);
	virtual ~iformat();


	virtual void fetch();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();


	int getsource() const;
	int getdestination() const;
	int getimmediate() const;
	void setsource(const int _source);
	void setdestination(const int _destination);
	void setimmediate(const int _immediate);

protected:
	int source;			//rs
	int destination;	//rt
	int immediate;
	int writeData;
	int readData[2];
	virtual bool valid() const;
};

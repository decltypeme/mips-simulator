
#include "inst.h"

class jr : public inst
{
public:
	jr(int source = -1);
	virtual ~jr();
	virtual void execute() const;
	int getsource() const;
	void setsource(const int source);

protected:
	int source;
	virtual bool valid() const;
};

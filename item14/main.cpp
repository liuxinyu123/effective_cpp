#include "lock.h"

int main ()
{
	Mutex m1;
	{
		Lock l (&m1);
	}
	

	return 0;
}

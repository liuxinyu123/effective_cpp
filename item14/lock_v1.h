#ifndef _LOCK_V1_H_
#define _LOCK_V1_H_

#include <memory>

class Lock 
{

public:
		Lock (Mutex *pMutex)
			:mutexPtr (pMutex, unlock)
		{
			lock (mutexPtr.get ());
		}


private:
		std::shared_ptr<Mutex> mutexPtr;
};

#endif

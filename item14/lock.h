#ifndef _LOCK_H_
#define _LOCK_H_

class Lock 
{

public:
		explicit Lock (Mutex *pMutex)
			:mutexPtr (pMutex)
		{
			Lock (mutexPtr);
		}

		~Lock ()
		{
			Unlock (mutexPtr);
		}
private:
		Mutex *mutexPtr;
		
};

#endif

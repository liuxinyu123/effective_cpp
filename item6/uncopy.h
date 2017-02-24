#ifndef _UNCOPY_H_
#define _UNCOPY_H_

class UnCopy
{

protected:
		UnCopy () = default;
		~UnCopy () = default;
private:
		UnCopy (const UnCopy&);
		UnCopy& operator= (const UnCopy&);

};

#endif

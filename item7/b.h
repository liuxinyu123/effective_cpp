#ifndef _B_H_
#define _B_H_

class B
{

public:
		virtual ~B () = 0;
};

class D : public B
{
	
public:
		~D ();
};

#endif

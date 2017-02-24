#ifndef _HOMEFORSALE2_H_
#define _HOMEFORSALE2_H_

class HomeForSale2
{

public:
		HomeForSale2 () = default;
		void memFunc ();
		HomeForSale2 (const HomeForSale2&) = delete;
		HomeForSale2& operator= (const HomeForSale2&) = delete;
};

#endif

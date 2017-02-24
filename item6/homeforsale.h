#ifndef _HOMEFORSALE_H_
#define _HOMEFORSALE_H_

class HomeForSale
{

public:
		HomeForSale () = default;
		void memFunc ();
private:
		HomeForSale (const HomeForSale&);
		HomeForSale& operator= (const HomeForSale&);
};

#endif

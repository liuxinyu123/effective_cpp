class Investment
{

public:
		bool isTaxFree () const;

};

Investment *createInvestment ();// factory function
std::shared_ptr<Investment> pi (createInvestment ());

bool taxable1 = pi -> isTaxFree ();// -> operator acquire raw resourse
bool taxable2 = (*pi).isTaxFree ();//   * operator acquire raw resourse 

int daysHeld (const Investment *pi);

int val = daysHeld (pi.get ()); //raw pointer  

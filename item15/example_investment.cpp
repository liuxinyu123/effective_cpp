class Investment
{

public:
		bool isTaxFree () const;

};

Investment *createInvestment ();// factory function
std::shared_ptr<Investment> pi (createInvestment ());

bool taxable1 = pi -> isTaxFree ();// -> operator
bool taxable2 = (*pi).isTaxFree ();//   * operator

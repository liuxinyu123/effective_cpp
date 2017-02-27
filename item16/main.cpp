#include <string>

int main (int argc, char *argv[])
{
	std::string *pstr1 = new std::string [100];
	std::string *pstr2 = new std::string;

	delete [] pstr1;
	delete  pstr2;
	
	typedef std::string AddressLines[4];

	std::string *pal = new AddressLines;
	delete [] pal;
	//delete pal  是错误的

	return 0;
}

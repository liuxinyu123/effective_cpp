#include <cstdlib>
#include "ctextblock.h"

CTextBlock::CTextBlock (const char *p)
	:pText (const_cast<char*> (p)) {}
char& CTextBlock::operator[] (std::size_t i) const 
{
	return pText[i];
}




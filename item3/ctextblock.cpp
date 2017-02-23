#include <cstdlib>
#include "ctextblock.h"
#include <cstring>

CTextBlock::CTextBlock (const char *p, std::size_t l, bool b)
	:pText (const_cast<char*> (p)), textLength (l), lengthIsValid (b) 
{
	if (l != std::strlen (p))
		lengthIsValid = false;
}

char& CTextBlock::operator[] (std::size_t i) const 
{
	return pText[i];
}

std::size_t CTextBlock::length () const
{
	if (!lengthIsValid)
	{
		textLength = std::strlen (pText);
		lengthIsValid = true;
	}

	return textLength;
}



#include <cstdlib>
#include "ctextblock.h"
#include <cstring>
#include <iostream>

CTextBlock::CTextBlock (const char *p, std::size_t l, bool b)
	:pText (const_cast<char*> (p)), textLength (l), lengthIsValid (b) 
{
	if (l != std::strlen (p))
		lengthIsValid = false;
}

const char& CTextBlock::operator[] (std::size_t i) const 
{
	std::cout << "const func" << std::endl;
	return pText[i];
}

char& CTextBlock::operator[] (std::size_t i)
{
	//return pText[i];
	std::cout << "non-const func" << std::endl;
	return const_cast<char&> (static_cast<const CTextBlock> (*this)[i]);
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



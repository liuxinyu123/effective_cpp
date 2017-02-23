#ifndef _CTEXTBLOCK_H_
#define _CTEXTBLOCK_H_

class CTextBlock
{

public:
		CTextBlock (const char *p = nullptr, std::size_t l = 0, bool b = true);
		char& operator[] (std::size_t i) const;
		std::size_t length () const;
private:
		char *pText;
		mutable std::size_t textLength;
		mutable bool lengthIsValid;
};

#endif

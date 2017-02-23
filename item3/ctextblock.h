#ifndef _CTEXTBLOCK_H_
#define _CTEXTBLOCK_H_

class CTextBlock
{

public:
		CTextBlock (const char *p = nullptr);
		char& operator[] (std::size_t i) const;
private:
		char *pText;
};

#endif

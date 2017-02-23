#ifndef _TEXTBLOCK_H_
#define _TEXTBLOCK_H_

#include <string>

class TextBlock
{

public:
		TextBlock (const std::string &s = "");
		TextBlock (const TextBlock &tb);

		char& operator[] (std::size_t i);
		const char& operator[] (std::size_t i) const;
private:
		std::string text;
};

#endif

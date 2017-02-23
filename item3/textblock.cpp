#include "textblock.h"

TextBlock::TextBlock (const std::string &s)
	:text (s) {}

TextBlock::TextBlock (const TextBlock &tb)
	:text (tb.text) {}

char& TextBlock::operator[] (std::size_t i)
{
	return text[i];
}

const char& TextBlock::operator[] (std::size_t i) const
{
	return text[i];
}

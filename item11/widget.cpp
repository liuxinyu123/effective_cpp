#include "widget.h"

Widget::Widget (int w, int h, const std::string &d, const std::string &n)
	:pb (new Bitmap (w, h, d)), name (n) {}

Widget::Widget (const Widget &w)
{
}
Widget& Widget::operator= (const Widget &w)
{
	delete pb;
	pb = new Bitmap (w.pb -> width, w.pb -> height, w.pb -> data);
	name = w.name;

	return *this;
}

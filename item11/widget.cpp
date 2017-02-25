#include <algorithm>
#include "widget.h"

Widget::Widget (int w, int h, const std::string &d, const std::string &n)
	:pb (new Bitmap (w, h, d)), name (n) {}

Widget::Widget (const Widget &w)
	:pb (new Bitmap (*w.pb)), name (w.name) 
{
}

Widget& Widget::operator= (const Widget &w)
{
	// 自我赋值安全的，但不是异常安全的
	//if (this != &w)
	//{
		//delete pb;
		//pb = new Bitmap (*w.pb);
		//name = w.name;
	//}
	
	//自我赋值安全，异常安全
	//Bitmap *org = pb;
	//pb = new Bitmap (*w.pb);
	//name = w.name;
	//delete org;
	Widget temp (w);
	//using std::swap;
	swap (temp);
	
	return *this;
}

void Widget::swap (Widget &w)
{
	using std::swap;
	swap (this -> pb, w.pb);
	swap (this -> name, w.name);
}


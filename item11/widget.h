#ifndef _WIDGET_H_
#define _WIDGET_H_

#include <string>

class Widget;

class Bitmap
{
		friend class Widget;
public:
		Bitmap (int w = 0, int h = 0, const std::string &s = "")
			:width (w), height (h), data (s) {}

private:
		int width;
		int height;
		std::string data;
};

class Widget
{

public:
		Widget (int w = 0, int h = 0, const std::string &d = "", const std::string &n = "");
		Widget (const Widget &w);
		Widget& operator= (const Widget &w);		
		int get_width ()
		{
			return pb -> width;
		}

		int get_height ()
		{
			return pb -> height;	
		}

		std::string get_name ()
		{
			return name;
		}
private:
		Bitmap *pb;
		std::string name;
};

#endif

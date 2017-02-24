#ifndef _STROBJ_H_
#define _STROBJ_H_

#include <string>
#include <iostream>

template <typename T>
class StrObj
{

		//friend std::ostream& operator<< (std::ostream &os, const StrObj &obj);
public:
		StrObj (const std::string &s, T v)
			: name (s), value (v) {}

		std::string getName () const
		{
			return name;
		}

		T getValue () const
		{
			return value;
		}
private:
		std::string name;
		T value;
};

//template <typename T>
//std::ostream& operator<< (std::ostream &os, const StrObj<T> &obj)
//{
	//os << obj.name << " " << obj.value;

	//return os;
//}

#endif

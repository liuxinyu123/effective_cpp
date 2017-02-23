#include <iostream>

int f (int a)
{
	
	return a;
}

#define CALL_WITH_MAX(a, b) f((a) > (b) ? (a) : (b))

template <typename T>
inline int CallWithMax (const T &v1, const T &v2)
{
	return f (v1 > v2 ? v1 : v2);	
}

int main (int argc, char *argv[])
{
	int a = 5;
	int b = 0;

	int ret = CALL_WITH_MAX (++a, b)  ;
	std::cout << ret << std::endl;
	
	ret = CALL_WITH_MAX (++a, b+7);
	std::cout << ret << std::endl;

	int c = 4;
	int d = 8;
	std::cout << CallWithMax (c, d) << std::endl;

	return 0;
}


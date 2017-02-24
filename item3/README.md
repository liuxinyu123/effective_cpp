#NOTE
1.  将某些东西声明为const可以帮助编译器侦测出错误用法。const可被施加    
于任何作用域的对象，函数参数，函数返回类型，成员函数本体上。      
2.  编译器强制实施bitwise constness,但我们编写程序时应该使用“概念上的常量性”      
3.  当const和non-const成员函数有着等价实质的实现时，令non-const版本调用const版本可以     
避免代码重复

#NOTE   
1.  若类含有const的成员函数或者含有对某类型的引用，则编译器为类合成的  
赋值运算符时delete的。    
2.  编译器可以暗自为class创建default构造函数，copy构造函数，copy assign    
运算符，以及析构函数。  

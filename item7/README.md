#NOTE
1.  使用多态性质的基类应该声明一个virtual析构函数。如果class带有任何     
virtual函数，它就应该有一个virtual析构函数。      
2.  如果class被设计的目的不是用作多态的（如noncopyable），或者不是用作基类的，     
就不该声明virtual析构函数。  


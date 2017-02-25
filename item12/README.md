#NOTE   
1.  Copying 函数应该确保赋值“对象内的所有成员变量”以及“所有base class成分”   
2.  不要尝试以某个copying函数实现另一个copying函数。应该将共同机能放进第三个
函数中，并由两个copying函数调用。

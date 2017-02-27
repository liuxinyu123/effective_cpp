int priority ();
void processWidget (std::shared_ptr<Widget> pw, int prior);

processWidget (new Widget, priority ());//错误 ，shared_ptr 是explicit的

processWidget (std::shared_ptr<Widget> (new Widget), priority ());//会引起资源泄漏 

processWidget 调用之前，做三件事情：
1.  调用priority ()    
2.  执行new  Widget
3.  调用std::shared_ptr 构造函数 

如果顺序是2 1 3 ，当调用priority() 发生异常， 会引发资源泄漏  

应该这么写：
std::shared_ptr<Widget> pw (new Widget);
processWidget (pw, priority ());

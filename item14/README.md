#NOTE    
1.  复制RAII对象必须一并复制它所管理的资源，所以资源的copying行为    
决定了RAII对象的copying行为。    
2.  普遍而常见的RAII class copying行为是：拟制copying，施行引用计数法，    
不过其它行为也都能被实现。   

#NOTE   
1.  APIs往往要求访问原始资源， 所以每一个RAII class应该提供一个   
“取得其所管理之资源”的办法。     
2.  对原始资源的访问可能经由显式或隐式转换。一般而言，显式比较安全    
但隐式转换对用户来说比较方便。

#NOTE    
1.  确保当对象自我赋值时operator=有良好的行为。其中技术包括（1）比较    
来源对象与目的对象的地址，（2）精心周到的语句顺序 （3）copy-and—swap    
2.  确定任何函数如果操作一个以上对象，而其中多个对象时同一个对象时，  
其行为仍然正确。
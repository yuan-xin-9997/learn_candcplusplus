# Python 中的常量  ref https://zhuanlan.zhihu.com/p/353201473
"""
很多高级编程语言都提供了定义常量的方法，一个常量一旦被定义，就无法再修改，这样做的意义在于防止其他人修改一些关键参数和配置。在C++，C#， php可以使用const关键字，java可以使用final，python没有提类似供定义常量的关键字，但我们可以通过一些技术手段实现类似的效果。

对于常量，有两个要求：

常量的命名必须都是大写字母，可以使用下划线连接单词
变量一旦赋值后，不可再修改
思路上，定义一个Const类，重写魔法方法__setattr__， 这个方法可以对对象的属性赋值进行干预。创建一个Const类的对象，所有想要定义的常量都是这个对象的属性，这样一来，我们还要防止生成多个Const类的对象，因此，需要实现单例模式。
"""
# import constant
# print(constant.PI)
# constant.PI = 3
# print(constant.PI)
# PI=3.14
# print(PI)

import constant
import time
import threading

constant.MAX_VALUE = 100
constant.MAX_VALUE = 50  # 修改变量将报错
constant.var = 10   # 常量名小写报错

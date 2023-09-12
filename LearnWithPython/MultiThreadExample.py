# 关于Python多线程的同步 ref https://zhuanlan.zhihu.com/p/94344847
# 关于Python并发编程参考learn_python，多线程、协程（异步编程）

import threading
import time

# Lock 同步锁（原语锁）

# 创建一个锁对象
lock = threading.Lock()

def func():
    global num  # 全局变量
    lock.acquire()
    num1 = num
    time.sleep(0.1)
    num = num1 - 1
    lock.release()
    time.sleep(2)


num = 100
l = []
for i in range(100):
    t = threading.Thread(target=func, args=())
    t.start()
    l.append(t)

for i in l:
    i.join()

print(num)

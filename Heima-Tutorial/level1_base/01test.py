x = 3
print(5 < x < 10)

import os
print(os.getcwd())
inStream=open("./01test.c", "r", encoding="utf-8")
for line in inStream:
    print(line)

def swap(a, b):
    temp = a
    a = b
    b = temp
    print(a, b)

a=10
b=20
swap(a, b)
print(a, b)
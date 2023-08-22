x = 3
print(5 < x < 10)

import os
print(os.getcwd())
inStream=open("./src/01test.c", "r", encoding="utf-8")
for line in inStream:
    print(line)
import numpy as np

n = int(input())
s = [input().split() for i in range(n)]
t = [input().split() for i in range(n)]
print(s)
s1 = []
t1 = []
for elm in s:
    li2 =[]
    for char in elm:
        if char == ".":
            li2.append(0)
        else:
            li2.append(1)
    s1.append(li2)
print(s1)


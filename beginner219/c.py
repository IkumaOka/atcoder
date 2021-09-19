import numpy as np

x = list(input())
n = int(input())
s = [input() for i in range(n)]
print(s)
original_dict = {}
for index, x_i in enumerate(x):
    original_dict[x_i] = index

for k in range(10):
    flag = True
    while flag:
        flag = False
        for i in range(len(s)-1):
            # if len(s[i] > )
            if original_dict[ s[i][k] ] > original_dict[ s[i+1][k] ]:
                s[i], s[i+1] = s[i+1], s[i]
                flag = True
print(s)


li = input().split()
a = int(li[0])
b = int(li[1])
c = int(li[2])
ans = -1
for i in range(1000):
    if i * c >= a and i * c <= b:
        ans = i * c
        break

print(ans)


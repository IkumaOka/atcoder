li = input().split()
a = list(map(int, input().split()))
n = int(li[0])
p = int(li[1])

ans = 0
for elm in a:
    if elm < p:
        ans += 1
print(ans)
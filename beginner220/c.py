n = int(input())
a = list(map(int, input().split()))
x = int(input())

sum_a = sum(a)
sum_ = 0
ans = 0

while sum_ <= x:
    ans += 1 * n
    sum_ += sum_a

sum_ -= sum_a
ans -= 1

print(ans)

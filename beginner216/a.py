x = float(input())
ans = ""
# print(type(x))
syousu = (x - int(x)) * 10
if 0 <= syousu and syousu <= 2:
    ans = "-"
elif 7 <= syousu and syousu <= 9:
    ans = "+"

ans2 = str(int(x)) + ans
# print(syousu)
# print(x)
# print(ans)
print(ans2)


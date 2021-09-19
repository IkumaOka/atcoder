x = int(input())
if 0 <= x and x < 40:
    ans = 40 - x
elif 40 <= x and x < 70:
    ans = 70 - x
elif 70 <= x and x < 90:
    ans = 90 - x
else:
    ans = "expert"
print(ans)

x = input() 
ans = "Strong"
x1 = int(x[0])
x2 = int(x[1])
x3 = int(x[2])
x4 = int(x[3])
x_li = [x1, x2, x3, x4]
if x1 == x2 == x3 == x4:
    ans = "Weak"
elif x1 == 9 or x2 == 9 or x3 == 9 or x4 == 9:
    if x1 == 9 and x1-9 == x2 and x2+1 == x3 and x3+1 == x4:
        ans = "Weak"
    elif x2 == 9 and x1+1 == x2 and x2-9 == x3 and x3+1 == x4:
        ans = "Weak"
    elif x3 == 9 and x1+1 == x2 and x2+1 == x3 and x3-9 == x4:
        ans = "Weak"
    elif x1 + 1 == x2 and x2 + 1 == x3 and x3 + 1 == x4:
        ans = "Weak"
elif x1 + 1 == x2 and x2 + 1 == x3 and x3 + 1 == x4:
    ans = "Weak"
print(ans)


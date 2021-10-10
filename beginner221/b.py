import copy

s = list(input())
t = list(input())

ans = "No"

if "".join(s) == "".join(t):
    ans = "Yes"
else:
    for i in range(len(s)-1):
        s_copy = copy.deepcopy(s)
        s1 = s_copy[i]
        s2 = s_copy[i+1]
        s_copy[i] = s2
        s_copy[i+1] = s1
        if "".join(s_copy) == "".join(t):
            ans = "Yes"
            break

print(ans)
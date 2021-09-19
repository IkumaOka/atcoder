s1 = input()
s2 = input()
s3 = input()
S = [s1, s2, s3]
t = list(input())
ans = ""
for elm in t:
    ans += S[int(elm)-1]
print(ans)


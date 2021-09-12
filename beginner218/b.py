p = list(map(int, input().split()))
s = ""
atoz = [chr(i) for i in range(ord('a'), ord('z')+1)] 
for num in p:
    s += atoz[num-1]
print(s)
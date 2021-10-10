li = list(input())

if len(li) == 4:
    ans = "".join(li)
if len(li) == 3:
    li.insert(0, "0")
    ans = "".join(li)
if len(li) == 2:
    li.insert(0, "00")
    ans = "".join(li)
if len(li) == 1:
    li.insert(0, "000")
    ans = "".join(li)
print(ans)



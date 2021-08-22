import itertools

input_val = input().rstrip().split()
s = input_val[0]
k = int(input_val[1])

s_li = sorted(list(set(s)))
s_to_i = ""
for char in s:
    s_to_i += str(s_li.index(char))
s_to_i_li = list(s_to_i)
s_to_i_li_int = [int(n) for n in s_to_i_li]
permutations = list(itertools.permutations(s_to_i_li_int))
perm_set_li = list(set(permutations))
ans_int = perm_set_li[k-1]
ans = ""
for i in ans_int:
    ans += s_li[i]
print(ans)



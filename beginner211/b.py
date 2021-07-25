string_list = [input() for i in range(4)]

ans = "No"
ans_list = ["H", "2B", "3B", "HR"]

for string in string_list:
    for string_ans in ans_list:
        if string == string_ans:
            ans_list.remove(string)
            break


if len(ans_list) == 0:
    ans = "Yes"

print(ans)
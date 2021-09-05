s1 = input()
s2 = input()
s3 = input()
ans = ""
li = ["ABC" , "ARC" , "AGC" , "AHC"]
li_2 = [s1, s2, s3]

for elm in li:
    # print("--------------------------")
    # print(elm)
    if elm not in li_2:
        # print("ififif")
        ans = elm
        break;

print(elm)
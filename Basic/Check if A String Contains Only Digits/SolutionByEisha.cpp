x=input()
flag=True
for i in range(len(x)):
    if ord(x[i])<=57 and ord(x[i])>=48:
        continue
    else:
        flag=False
if flag:
    print("YES")
else:
    print("NO")

x=int(input())
cnt="True"
for i in range(2,int(x**0.5)+1):
    if x%i==0:
        cnt=False
        break
if cnt:
    print("Prime Number")
else:
    print("Not a Prime Number")

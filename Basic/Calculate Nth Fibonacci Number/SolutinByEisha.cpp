x=int(input())
a=0
b=1
sum=a+b
if x==0:
    print(a)
if x==1:
    print(b)
if x>=2:
    digit=2
    while digit != x:
        a = b
        b = sum
        sum = a + b
        digit += 1
    print(sum)

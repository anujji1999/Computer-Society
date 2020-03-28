arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def productOfArray(arr):
    p=1
    for v in arr:
        p*=v
    return p
print(productOfArray(arr))

arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def sumOfArray(arr):
    sum=0
    for v in arr:
        sum+=v
    return sum
print(sumOfArray(arr))

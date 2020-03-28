arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def array_min(arr):
    min=arr[0]
    for v in arr:
        if min>v:
            min=v
    return min
print(array_min(arr))

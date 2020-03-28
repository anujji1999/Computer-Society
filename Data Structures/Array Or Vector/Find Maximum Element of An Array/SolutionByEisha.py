arr=[]
x=int(input())
for i in range(x):
    ele=int(input())
    arr.append(ele)
def array_max(arr):
    max=arr[0]
    for v in arr:
        if max<v:
            max=v
    return max
print(array_max(arr))

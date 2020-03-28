arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def secondMaxElement(arr):
    maxNum=max(arr[0],arr[1])
    secMax=min(arr[0],arr[1])
    for i in range(2,len(arr)):
        if maxNum<arr[i]:
            secMax=maxNum
            maxNum=arr[i]
        elif secMax<arr[i]:
            secMax=arr[i]
    return secMax
print(secondMaxElement(arr))

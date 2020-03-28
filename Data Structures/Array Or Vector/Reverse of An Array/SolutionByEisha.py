arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def reverse(arr):
    left=0
    right=x-1
    mid=(left+right)//2
    while left<right:
        arr[left],arr[right]=arr[right],arr[left]
        left+=1
        right-=1
print(reverse(arr))
for v in arr:
    print(v,end=" ")

arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def binary_search(arr,y):
    left=0
    right=len(arr)-1
    mid=(left+right)//2
    while left<=right:
        if arr[mid]==y:
            return "Yes"
        elif arr[mid]<y:
            left=mid+1
        else:
            right=mid-1
        mid=(left+right)//2
    return "No"
y=int(input())
print(binary_search(arr,y))

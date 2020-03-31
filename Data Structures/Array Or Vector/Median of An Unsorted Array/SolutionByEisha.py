arr=[]
n=int(input())
for i in range(n):
    arr.append(int(input()))
def median(arr,n):
    arr=sorted(arr)
    mid=n//2
    if n%2!=0:
        return arr[mid]
    else:
        r=(arr[mid-1]+arr[mid])/2
        return r
print(median(arr,n))

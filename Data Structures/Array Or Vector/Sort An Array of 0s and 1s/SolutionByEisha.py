arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def sortingArrayOf0And1(arr):
    n=len(arr)
    r=[]
    cnt=0
    for i in range(n):
        if arr[i]==0:
            r.append(arr[i])
        else:
            cnt+=1
    for i in range(cnt):
        r.append(1)
    print(r)
sortingArrayOf0And1(arr)

arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def sortingArrayOf0And1And2(arr):
    n=len(arr)
    r=[]
    cnt1=0
    cnt2=0
    for i in range(n):
        if arr[i]==0:
            r.append(arr[i])
        elif arr[i]==1:
            cnt1+=1
        else:
            cnt2+=1
    r.extend([1]*cnt1)
    r.extend([2]*cnt2)
    print(r)
sortingArrayOf0And1And2(arr)

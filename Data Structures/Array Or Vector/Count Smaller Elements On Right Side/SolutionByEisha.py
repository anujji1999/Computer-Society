arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def countSmaller(arr):
    n=len(arr)
    r=[]
    for i in range(n):
        cnt=0
        for j in range(i+1,n):
            if arr[j]<arr[i]:
                cnt+=1
        r.append(cnt)
    print(r)
countSmaller(arr)

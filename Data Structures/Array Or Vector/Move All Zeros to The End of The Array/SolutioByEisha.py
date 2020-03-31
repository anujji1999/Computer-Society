arr=[]
n=int(input())
for i in range(n):
    arr.append(int(input()))
def moveZerosToEnd(arr,n):
    r=[]
    cnt=0
    for i in range(n):
        if arr[i]!=0:
            r.append(arr[i])
        else:
            cnt+=1
    r.extend([0]*cnt)
    print(r)
moveZerosToEnd(arr,n)

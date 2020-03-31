arr=[]
n=int(input())
for i in range(n):
    arr.append(int(input()))
m=int(input())
def search(arr,y):
    for v in arr:
        if y==v:
            return "Yes"
    return "No"
def smallestMinElement(arr,n,m):
    for i in range(m):
        if search(arr,i)=="No":
            return i
print(smallestMinElement(arr,n,m))

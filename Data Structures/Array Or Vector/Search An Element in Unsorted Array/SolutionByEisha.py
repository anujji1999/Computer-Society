arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def search(arr,y):
    for v in arr:
        if y==v:
            return "Yes"
    return "No"
y=int(input())
print(search(arr,y))

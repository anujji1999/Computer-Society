arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def threeLargestElement(arr):
    n=len(arr)
    for i in range(n-1):
        for j in range(1,n-i):
            if arr[j-1]>arr[j]:
                arr[j - 1], arr[j] = arr[j], arr[j - 1]
    return arr[n-1:n-4:-1]
print(threeLargestElement(arr))

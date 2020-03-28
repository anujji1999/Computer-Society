arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def insertionSort(arr,x):
    for i in range(1,x):
        for j in range(i,0,-1):
            if arr[j]<arr[j-1]:
               temp=arr[j]
               arr[j]=arr[j-1]
               arr[j-1]=temp
    return arr

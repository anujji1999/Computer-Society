arr=[]
x=int(input())
for i in range(x):
    arr.append(int(input()))
def selectionSort(arr,x):
    for i in range(x):
        temp=i
        for j in range(i+1,x):
            if arr[temp]>arr[j]:
                temp=j
            arr[i],arr[temp]=arr[temp],arr[i]
    return arr
print(selectionSort(arr,x))

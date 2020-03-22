def selectionSort(arr):
    for i in range(len(arr)):
        min = i
        for j in range(i + 1, len(arr)):
            if arr[min] > arr[j]:
                min = j
    
        arr[i], arr[min] = arr[min], arr[i]


arr = []
n = int(input("Enter the number of elements "))
print("Input the elements of the array ")

for i in range(n):
    arr.append(int(input()))

print("Sorted array:")
for i in range(len(arr)):
    print("%d" % arr[i])

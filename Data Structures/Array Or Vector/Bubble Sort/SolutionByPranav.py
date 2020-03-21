def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

arr = []
n = int(input("Enter the number of elements "))
print("Input the elements of the array ")
for i in range(n):
    arr.append(int(input()))

bubbleSort(arr)

print("Sorted array:")
for i in range(len(arr)):
    print(arr[i])

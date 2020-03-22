def insertionSort(arr):
    for i in range(1, len(arr)):
        beg = arr[i]
        j = i - 1
        while j >= 0 and beg < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = beg

arr = []
n = int(input("Enter the number of elements "))
print("Input the elements of the array ")
for i in range(n):
    arr.append(int(input()))

insertionSort(arr)

print("Sorted array is:")
for i in range(len(arr)):
    print("%d" % arr[i])

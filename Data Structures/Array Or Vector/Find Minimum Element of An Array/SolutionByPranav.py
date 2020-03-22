def findMax(arr):
    maxElement = arr[0]
    for i in range(len(arr)):
        if maxElement > arr[i]:
            maxElement = arr[i]
    return maxElement

arr = []
n = int(input("Enter the number of elements "))
print("Input the elements of the array ")

for i in range(n):
    arr.append(int(input()))
x = findMax(arr)

print("Minimum Element: ", x)

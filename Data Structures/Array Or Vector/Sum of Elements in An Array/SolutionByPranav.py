def findSum(arr):
    x=0
    for i in range(len(arr)):
        x+=arr[i]
    return x


arr = []
n = int(input("Enter the number of elements "))
print("Input the elements of the array ")
for i in range(n):
    arr.append(int(input()))

sum = findSum(arr)

print("Sum of elements of array is: ", sum)

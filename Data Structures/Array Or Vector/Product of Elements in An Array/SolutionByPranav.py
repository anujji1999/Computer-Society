def findProduct(arr):
    x=1
    for i in range(len(arr)):
        x*=arr[i]
    return x

arr = []
n = int(input("Enter the number of elements "))
print("Input the elements of the array ")

for i in range(n):
    arr.append(int(input()))

product = findProduct(arr)

print("Product of elements of array is: ", product)

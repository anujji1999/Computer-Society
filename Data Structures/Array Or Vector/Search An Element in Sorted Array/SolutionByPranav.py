def searchElement(arr):
    x = int(input("Enter the element you want to search "))
    p=0
    for i in range(len(arr)):
        if x == arr[i]:
            p=1
            break
    if p == 1:
        print("YES")
    else:
        print("NO")

arr = []
n = int(input("Enter the number of elements "))
print("Input the elements of the array ")

for i in range(n):
    arr.append(int(input()))

searchElement(arr)

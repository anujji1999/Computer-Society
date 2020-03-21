size = int(input("Enter the size of an array:"))
array = []
print("Enter the array elements:")
for i in range(0,size):
    element = int(input())
    array.append(element)
print("The array entered is:", array)
print("After Bubble sort, array becomes:")

while(size!=1):
    for i in range(0, size-1):
        if (array[i]>array[i+1]):
                temp = array[i]
                array[i] = array[i+1]
                array[i+1] = temp
        else:
                i+=1
    size=size-1
    
print(array)

# taking number as string
num = input("Enter a number: ")
# initializing sum to zero
sum = 0
# going through every digit using every for loop
for i in num:
    sum += int(i)
# printing the sum
print("The sum of digits of number is",sum)
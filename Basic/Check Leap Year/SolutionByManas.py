#Solution By Manas Das

x = int(input("Enter a year : "))

print("input = ", x)

if (x % 4 == 0) and (x % 100 != 0):
    print("output = Yes")

elif (x % 400 == 0):
    print("output = Yes")

else :
    print("output = No")

# Taking the input for the factorial of the desired number
number=int(input("Enter the number of which the factorial is required!"))
# initialising the factorial to be 1
f=1
# for loop for the recursive iteration
for x in range(1, number+1):
  f=f*x
  x+=1
# printing the result
print("The factorial of", number, "is",f)

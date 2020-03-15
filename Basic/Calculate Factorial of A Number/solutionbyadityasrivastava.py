num = int(input("enter the number = "  ))
facto = 1
if num < 0:
    print("invalid input")
elif num == 0:
    print("factorial of 0 is 1")
else:
    for i in range(1,num+1):
        facto=facto*i
    print("factorial of", num ,"is", facto )

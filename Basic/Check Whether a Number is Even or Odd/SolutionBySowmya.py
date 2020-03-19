# Taking a number as an input of type integer
num=int(input("Enter any number!"))
# dividing the number by 2
result = num/2
# Checking whether the number is positive or not,
# if the number is positive, check whether the 'result' is an integer or not
# eg: let num=4 then result=2, since the result type is 'int', it's even!
# eg: let num=5 then result=2.5, since the result type is 'float' and not 'int', it's odd!
# we can say this will work for all cases as an odd num is never divisible by 2.
if (num>=0):
    if(result== int(result)):
         print("The number",num, "is even")
    else:
         print("The number",num, "is odd")
else:
    print("Only positive numbers are allowed.")

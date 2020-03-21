numbers=[]
size = int(input("Enter the total number of numbers in the series!"))
print("Enter the series, for missing element use a single-space or an underscore:")
for i in range(1,size+1):
    number = str(input())
    numbers.append(number)
print("The series looks like this: ", numbers)
for i in range(1,size):
    if (numbers[i]==" " or numbers[i]=="_"):
        missing_element = i+1
         
    elif numbers[i].isalpha():
        print("Only numbers, blanks and underscores are allowed.")
        missing_element = "None. Invalid"
        
print("The missing element is: ", missing_element)


#Program Description to find the sum of digits of a number
#Function Name : reverse_of_a_number -- returning int

def reverse_of_a_number(num): 
  
    sum = 0
  
    while (num != 0): 

        sum = sum + (num % 10) 
        num = num // 10
  
    return sum 
  

n = int(input("input = "))
print("output = " + str(reverse_of_a_number(n))) 

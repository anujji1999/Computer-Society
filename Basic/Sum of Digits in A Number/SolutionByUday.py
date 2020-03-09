
#Program Description to find the sum of digits of a number
#Function Name : sum_of_digits -- returning int

def sum_of_digits(num): 
  
    sum = 0
  
    while (num != 0): 

        sum = sum + (num % 10) 
        num = num // 10
  
    return sum 
  

n = int(input("input = "))
print("output = " + str(sum_of_digits(n))) 

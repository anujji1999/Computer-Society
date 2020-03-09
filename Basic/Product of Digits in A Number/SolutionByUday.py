
#Program Description to find the products of digit of a number
#Function Name : products_of_digit_of_a_number -- returning number

def products_of_digit_of_a_number(num): 
  
    product = 1
  
    while (num != 0): 
        if num%10==0 :
            num = num // 10
        else:   
            product = product * (num % 10) 
            num = num // 10
  
    return product 
  

n = int(input("input = "))
print("output = " + str(products_of_digit_of_a_number(n))) 

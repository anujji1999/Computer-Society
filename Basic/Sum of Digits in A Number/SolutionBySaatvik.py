#To display sum of digits in a number

def sum_of_digits(n):
    
    sum = 0
    
    for i in n:
        sum += int(i)
    
    return sum

sum_of_digits("123456")

#Output : 21
    
  

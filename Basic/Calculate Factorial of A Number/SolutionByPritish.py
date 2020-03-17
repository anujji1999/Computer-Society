 """
 Factorial of number using while loop
 
 n = 4
  Output = 24
  
 n = 6
  Output = 720
"""  
  
n = int(input("Enter n: "))
fact=1
while(n!=0):
    fact= fact*n
    n = n-1
print(f'Factorial of given no.: {fact}')

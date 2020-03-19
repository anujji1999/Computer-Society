#Solution by Manas

def fact(n):
    if n == 1:
        return 1
    else:
        return n*fact(n-1)

n = int(input("Input a number whose factorial is to be calculated:"))
x = fact(n)
print(x)

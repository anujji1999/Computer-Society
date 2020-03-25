x=input()
x=list(x)
def sumOfDigits(x):
    if len(x)==0:
        return 0
    return int(x[0])+int(sumOfDigits(x[1:]))
print(sumOfDigits(x))

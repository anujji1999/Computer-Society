x=int(input("Base="))
y=int(input("Power="))
def pow(a,b):
    if b==0:
        return 1
    if b<0:
        return 1/pow(a,-b)
    partial = pow(a, b // 2)
    if b%2==0:
        return partial*partial
    else:
        return a*partial*partial
print(pow(x,y))

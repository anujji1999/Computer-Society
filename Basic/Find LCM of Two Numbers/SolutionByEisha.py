x=int(input())
y=int(input())
def Lcm(x,y):
    c=x*y
    while x!=0 and y!=0:
        if x>y:
            x=x%y
        else:
            y=y%x
    hcf=x+y
    lcm=c/hcf
    return int(lcm)
print(Lcm(x,y))

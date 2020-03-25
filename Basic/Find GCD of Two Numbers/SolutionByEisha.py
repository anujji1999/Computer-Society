x=int(input())
y=int(input())
def hcf(x,y):
    while x!=0 and y!=0:
        if x>y:
            x=x%y
        else:
            y=y%x
    return x+y
print(hcf(x,y))

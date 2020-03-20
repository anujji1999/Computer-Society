x=input()
p=1
def productOfAllDigits(x,p):
    for i in x:
        if i!="0":
            p*=int(i)
    return p
print(productOfAllDigits(list(x),p))

x=int(input())
def count_digits(x):
    cnt=0
    while x>0:
        cnt+=1
        x=x//10
    return cnt
print(count_digits(x))

n1=int(input())
n2=int(input())
less=n1 if n1<n2 else n2
gcd=1
i=less
while(True):
	if(n1%i==0) and (n2%i==0):
		gcd=i
		break
	else:
		i=i-1
print("GCD is ",gcd)

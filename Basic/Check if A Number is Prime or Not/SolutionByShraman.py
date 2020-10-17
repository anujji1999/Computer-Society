def prime(n):
    l = int(n / 2)
    for i in range(2, l):
        if n % i == 0:
            return 'No'
    return 'Yes'


print("N = ", end="")
n = int(input())
print(f"Output = {prime(n)}")

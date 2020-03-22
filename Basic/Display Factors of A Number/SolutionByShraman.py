def factor(n):
    l = []
    for i in range(1, n + 1):
        if n % i == 0:
            l.append(i)
    l = str(l)
    return l


print("N = ", end="")
n = int(input())
print(f"Output = {factor(n)}")

def fact(n):
    if n == 1:
        return 1
    return n * fact(n-1)


print("N = ", end="")
N = int(input())
N = fact(N)
print(f"Output = {N}")

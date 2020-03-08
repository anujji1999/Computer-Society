def fibonacci(n):
    if n == 1:
        return 0
    if n == 2:
        return 1
    return fibonacci(n-1)+fibonacci(n-2)


print("N = ", end="")
N = int(input())
N = fibonacci(N)
print(f"Output = {N}")

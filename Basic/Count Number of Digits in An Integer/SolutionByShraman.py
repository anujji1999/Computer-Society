def digit(n):
    s = 0
    while n > 1:
        n = n / 10
        s += 1
    return s


print("Input = ", end="")
n = int(input())
print(f"Output = {digit(n)}")

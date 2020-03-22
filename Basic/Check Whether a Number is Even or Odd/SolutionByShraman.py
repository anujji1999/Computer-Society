import math


def evenOdd(n):
    m = float(n / 2)
    if m == float(math.floor(m)):
        return "Even"
    return "Odd"


print("Input = ", end="")
n = int(input())
print(f"Output = {evenOdd(n)}")

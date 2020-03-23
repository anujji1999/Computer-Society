def factor(n):
    l = []
    for i in range(1, n + 1):
        if n % i == 0:
            l.append(i)
    return l


def GCD(a, b):
    l = factor(a)
    for i in range(len(l) - 1, 0, -1):
        if b % l[i] == 0:
            return l[i]
    return 1


def LCM(a, b):
    if a > b:
        c = GCD(a, b)
    else:
        c = GCD(b, a)
    h = (a * b) / c
    return h


a = int(input())
b = int(input())
h = LCM(a, b)
print(f"Output = {h}")

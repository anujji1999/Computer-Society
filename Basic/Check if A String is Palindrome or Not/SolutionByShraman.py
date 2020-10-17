def palin(str):
    l = len(str)
    n = int(l/2)
    for i in range(1, n):
        if str[i] != str[l - i - 1]:
            return 'No'
    return 'Yes'


str = input()
print(palin(str))

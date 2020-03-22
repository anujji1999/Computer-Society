def vowel(s):
    v = 0
    for i in s:
        if (i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u' or i == 'A' or i == 'E' or i == 'I' or i == 'O' or i == 'U'):
            v += 1
    return v


print("String = ", end="")
s = input()
print(f"Output = {vowel(s)}")

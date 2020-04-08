#Solution By Manas Das

x = str(input("Enter a letter : "))

print(x)

if str.lower(x) in ['a', 'e', 'i', 'o', 'u']:
    print("output = Vowel")

else :
    print("output = Consonant")

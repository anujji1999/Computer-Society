# Taking the character from the user
character= str(input("Enter  the character and find out whether its a consonant or a vowel!"))
# converting the character to lowercase so that the number of conditions in if loop reduces.
ch= character.lower()
# checking for the single character i.e., length of the string is 1.
if (len(character)==1):
    if (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'):
        print(character, "is a vowel")
    else:
        print(character, "is a consonant")
else:
    print("Invalid entry. Only characters are allowed!")


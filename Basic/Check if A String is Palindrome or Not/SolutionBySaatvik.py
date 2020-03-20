#To check whether a string is palindrome or not

def palindrome_check(text):
    if text == text[::-1]:
        print("Yes")
    else:
        print("No")
        
palindrome_check("madam")

#Output:
'Yes'

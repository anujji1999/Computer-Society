s=input()
def isPalindrome(s):
    if  s[::-1]==s:
        return "Yes"
    return "No"
print(isPalindrome(s))

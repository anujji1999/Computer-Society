#To Count Number of Vowels in a String

def vowel_count(text):
    count = 0
    vowel = set("aeiouAEIOU")
    
    for i in text:
        if i in vowel:
            count = count+1
    return count

vowel_count("abcjfe")

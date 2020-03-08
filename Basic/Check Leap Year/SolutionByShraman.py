def leap(n):
    if n % 4 == 0:
        if n % 100 == 0:
            if n % 400 == 0:
                return "Yes"
            else:
                return "No"
        else:
            return "Yes"
    else:
        return "No"


print("input = ", end="")
year = int(input())
S = leap(year)
print(f"output = {S}")

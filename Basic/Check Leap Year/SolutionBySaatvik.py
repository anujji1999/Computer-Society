def leap(year):
    if (year % 4 == 0) or (year % 100 == 0) and (year % 400 == 0):
        return ('Yes')
    else:
        return ('No')
    

year = int(input())
print(f"input = {year}")

out = leap(year)
print(f"output = {out}")

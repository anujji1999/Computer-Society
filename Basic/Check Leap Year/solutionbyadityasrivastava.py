year=int(input("enter the year =  "))

if(year % 4==0 & year % 100==0 & year % 400==0):
    print("YES",year, "is a leap year!!",end = " ")
else:
    print("NO",year, "is not a leap year!!",end = " ")

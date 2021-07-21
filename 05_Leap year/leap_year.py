year = int(input("Please enter year to check for leap: "))

if(year%400 == 0):
    print(year, "is a leap year.")
elif(year%100 == 0):
    print(year, "is not a leap year.")
elif(year%4 == 0):    
    print(year, "is a leap year")
else:
    print("Not a leap year.")

binNumber = input("Enter binary number: ")
revBinNumber = binNumber[::-1]
decimal = 0

for i in range(0, len(binNumber)):
    decimal = (2**i)*int(revBinNumber[i]) + decimal

print(decimal)

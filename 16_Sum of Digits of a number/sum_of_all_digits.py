num = input("Enter number: ")
temp = 0

for i in range(0, len(num)):
    temp = temp + int(num[i])

print("Sum of all digits:", temp)
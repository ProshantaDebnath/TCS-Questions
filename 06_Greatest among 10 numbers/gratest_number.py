# Method 1 to solve this problem.

numLis = [int(input("Enter number: "))for i in range(0, 10)]
print("Largest number you entered is:", sorted(numLis)[9])


# Method 2 to solve this problem.

numLis = [int(input("Enter number: "))for i in range(0, 10)]

for j in range(0, 10):
    if(numLis[0] <= numLis[j]):
        temp = numLis[j]
print("Largest number you entered is:", temp)
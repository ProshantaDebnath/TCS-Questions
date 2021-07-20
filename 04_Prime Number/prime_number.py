
# Program for checking prime numbers.

num = input("Enter any number: ")

num = int(num)

if(num != 1):
    for i in range(2, num):
        if(num % i) == 0:
            print(num, "is not a prime number")
            break
    else:
        print(num, "is a prime number")
else:
    print(num, "Not a prime number.")


# Program for printing n prime numbers in a given range.

r1,r2 = int(input("Lower bound: ")),int(input("Upper bound: "))

if(r2 < r1):
    print("Invalid Range")
    exit()

print("Prime numbers are: ", sep=" ", end="")

for i in range(r1, r2+1):
    if i > 1:
        for j in range(2, i):

            if(i%j == 0):
                break
        else:
            print(i, sep=", ", end=" ")

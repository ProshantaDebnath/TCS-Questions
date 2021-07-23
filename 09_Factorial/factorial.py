num = int(input("Enter your number: "))

def factorial(n):
    temp = 1
    while(n != 0):
        temp = temp*n
        n = n-1
    return temp

print(factorial(num))
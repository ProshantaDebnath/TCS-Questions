# Method_1 Using Recursion

def HCForGCD(a, b):

    if(b == 0):
        return a
    else:
        return HCForGCD(b, a%b)

num1, num2 = int(input("First number: ")), int(input("Second number: "))
print("HCF of given number is: ", HCForGCD(num1, num2))


# Method_2 Using Euclidean Algorithm

def HCF(a, b):

    if(a == 0):
        return b
   
    return HCF(b%a, a)

num3, num4 = int(input("First number: ")), int(input("Second number: "))
print("HCF of given number is: ", HCF(num3, num4))
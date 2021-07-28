
# Method_1 using looping.

num1, num2 = int(input("First number: ")), int(input("Second number: "))
i=2
temp=1

while(num1 != 1 or num2 != 1):
    if(num1 % i ==0 and num2 % i ==0):
        num1=num1 // i
        num2=num2 // i
        temp= temp*i

    elif(num1 % i ==0):
        num1=num1 // i
        temp= temp*i

    elif(num2 % i ==0):
        num2=num2 // i
        temp= temp*i

    else:
        i = i+1

print("LCM of given numbers: ", temp)


# Method_2 using HCF.
# we know L.C.M = (NUM_1 * NUM_2) // H.C.F

def hcf(a,b):
    if a==0:
        return b
    return hcf(b%a, a)

def lcm(a,b):
    return (a*b) // hcf(a, b)

num3, num4 = int(input("First number: ")), int(input("Second number: "))
print("LCM of given numbers: ",lcm(num3, num4))

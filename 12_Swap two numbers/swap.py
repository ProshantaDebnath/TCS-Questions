# Swapping content of two variables without using any other variable.

a,b = int(input("Enter first number: ")), int(input("Enter second number: "))

print("Initial: A=", a,"B=", b)

a = a+b
b = a-b
a = a-b

'''
for Example:
    a=100
    b=50

    a = a+b [ a=150 ]
    b = a-b [ b=100 ]
    a = a-b [ a=50 ]
'''

print("Final: A=", a,"B=", b)
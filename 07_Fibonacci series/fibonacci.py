num = int(input("Enter upper bound: "))

a = 0
b = 1

print(a, b, end=" ")

for _ in range(0, num):
   temp = a+b
   print(temp, end=" ")
   a=b
   b=temp
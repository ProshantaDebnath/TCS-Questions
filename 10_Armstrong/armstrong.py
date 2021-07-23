num = int(input("Enter your number: "))
temp1 = 0
temp2=num

while(temp2 != 0):
    temp1 = (temp2 % 10)**3 + temp1
    temp2 = temp2 // 10
    
if(temp1==num):
    print("Number is armstrong!")
else:
    print("Number is not armstrong!")
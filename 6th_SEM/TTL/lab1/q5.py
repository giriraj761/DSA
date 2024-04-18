import math as m
i = int(input("enter a number"))
dig = m.floor(m.log10(i))+1
arm_no = i
sum = 0
while arm_no > 0:
    sum += int(pow((arm_no % 10), dig))
    arm_no //= 10

if sum == i:
    print("yes it a armstrong number")
else:
    print('its not a armstrong number')

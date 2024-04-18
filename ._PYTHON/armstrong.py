import math as m
        
for i in range(11,50000000): # 0 - 4999
    dig = m.floor(m.log10(i))+1
    # print(dig)
    arm_no = i
    sum = 0
    while  arm_no > 0:
        sum += int(pow((arm_no%10),dig))
        arm_no//=10
    
    if sum == i :
        print(i)

print('end of code')
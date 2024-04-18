decimal = int(input("enter the decimal number"))
n = decimal
b = int(input("enter the base"))

s =""
while decimal>0:
    s = s + str(decimal % b)
    decimal = decimal // b
    
print("the number {} in base {} is {}".format(n,b,s[::-1]))
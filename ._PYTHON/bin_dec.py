# from audioop import reverse
import math
import string
# bin = 101101
# i = 0
# dec = 0
# while bin>0 :
#     dec=dec+(bin%10*pow(2,i))
#     i+=1    
#     bin//=10
    
# print("the decimal equivalence is {}".format(dec),end=' ')
dec = int(input())
i = 1
binary = 0
while dec>0:
    digit = dec % 2
    binary = binary + (digit * i)
    i = i * 10 
    dec = dec // 2
    
print(binary) 


tempnum=str(binary) 
# tempnum = tempnum[::-1]
print(tempnum)
    
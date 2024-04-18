import math


# you can use for else in this as its the best suited
import math as m
x = int(input( 'enter a number : '))
# isprime = True
# i=2
# while i*i<=x:
#     if x % i == 0:
#         isprime=False
#         break
#     i+=1

for i in range(2,int(m.sqrt(x))+1):
    if x % i == 0:
        # isprime = False
        print('is not prime')
        break
else:
    print("is prime")

# if isprime:
#     print("is prime")
# else:
#     print('is not prime')
    
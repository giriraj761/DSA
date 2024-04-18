from calendar import c
from string import digits


# fibonacci 

# def fibo(a,b,n):
#     if(n<=0):
#         return
    
#     c = a + b
#     print(c)
#     fibo(b,c,n-1)
    
# fibo(0,1,20)



# sum od digits

# def sumd(n):
#     if(n<=0):
#         return 0
    
#     return (n%10)+sumd(n//10)

# print(sumd(123))


# tower of hanoi

def tower(s,h,d,n):
    if(n<=0):
        return
    
    tower(s,d,h,n-1)
    print('tile {} from {} to {}'.format(n,s,d))
    tower(h,s,d,n-1)
    
tower('A','B','C',3)



    
a = int(input("enter a number"))
b = int(input("enter a number"))  
def gcd(a,b):
    if(b==0):
        return a
    return gcd(b,a%b)

ans = gcd(a,b)
print("Lcm of two number is {}".format(int((a*b)/int(ans))));

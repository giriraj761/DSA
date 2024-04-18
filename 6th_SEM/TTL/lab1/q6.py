n = int(input("enter a number "))

print("the factors are : ")
for i in range(1,n):
    if n % i == 0:
        print(i,end=' ')
        
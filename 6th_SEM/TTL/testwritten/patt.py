n = int(input("enter the number of elements"))
for i in range(n+1,0,-1):
    s=''
    for k in range(0,n-i+1):
        print(" ",end=' ')
    if i % 2 !=0:
        for j in range(1,i):
            print(j,end=' ')
    else:
        for l in range(i-1,0,-1):
            print(l,end=' ')
    print()
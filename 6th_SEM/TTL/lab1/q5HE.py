num = int(input("enter the range"))
# print( (num * ( num + 1 ) * ( 2 * num + 4 )) // 12 )

sum = 0
for i in range(1, num+1):
    for j in range(1, i + 1):
        sum = sum + j

print(sum)

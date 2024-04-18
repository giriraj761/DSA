n = int(input("enter a range"))
li = []
for i in range(1, n+1):
    flag = True
    for j in range(2, int(i**0.5)+1):
        if i % j == 0:
            flag = False
            break
    if flag == True:
        print(i)
        li.append(i)

print("the sum of all prime number in the range is {}".format(sum(li)))

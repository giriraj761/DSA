from array import *

arr = array('i',[])

n = int(input('enter the size of the array'))

for i in range(n):
    x = int(input('enter the elements '))
    arr.append(x)

print(arr)    

val = int(input('enter the element to search '))
i = 0
for i in range(len(arr)):
    if arr[i]==val:
        print('found at index ',i)
        break
else:
    print('element not found')
    
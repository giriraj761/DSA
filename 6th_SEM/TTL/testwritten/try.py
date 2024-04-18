# n = int(input("enter the number of elements"))
# li=[]
# odd =[]
# on = 0
# even =[]
# en =0
# for i in range(0,n):
#     x = int(input("enter the {}th element: ".format(i+1)))
#     if(i%2!=0):
#         even.append(x)
#         en+=1
#     else:
#         odd.append(x)
#         on+=1
#     li.append(x)
    
# print("original list ",li)
# newodd = []
# neweven = []
# print("old odd list ",odd)
# print("old even list ",even)

# for i in range(0,on-1,2):
#     newodd.append(odd[i]+odd[i+1])
# for i in range(0,en-1,2):
#     neweven.append(even[i]+even[i+1])
    
# extraodd = -999
# extraeven = -999
# if(en%2!=0):
#     extraeven = even[en-1];
# if(on%2!=0):
#     extraodd = odd[on-1];

# if(extraeven !=-999):
#     neweven.append(min(even)+extraeven);
# if(extraodd!=-999):
#     newodd.append(min(odd)+extraodd);

    
# print("new odd list ",newodd)
# print("new even list ",neweven)
# ans = []
# for i in range(len(newodd)):
#     ans.append(newodd[i]*neweven[i])
    
# print("the product is: ",ans)


print("hello {0!r} and {0!s}".format('foo','bin'))

# a = {'hello':'world','frist':1}
# b = {val : k for k , val in a.items()}
# print(b)

# list1=[3,2,5,7,3,6]
# list1.pop(3)
# print(list1)

import math as m

def getnumberASC(n):
    numberASC = str(n)
    numberASC = ''.join(sorted(numberASC))
    numberASC = int(numberASC)
    return numberASC

def getnumberDEC(n):
    numberDEC = str(n)
    numberDEC = ''.join(sorted(numberDEC , reverse = True))
    numberDEC = int(numberDEC)
    return numberDEC

def chechTEMP(temp):
    while(len(temp) < 4):
        temp = temp + '0'
    return temp

def Calc(n , count = 0):
    n2 = getnumberASC(n)
    n1 = getnumberDEC(n)
    temp = str(n1)
    while(temp != "6174" and count < 10):
        temp = str(n1 - n2)
        print("{} - {} = {}".format( n1 , n2 , temp ))
        temp = chechTEMP(temp)
        n1 = getnumberDEC(temp)
        n2 = getnumberASC(n1)
        count += 1
    return count

control = 1
while(control != 0):
    num = str(input("Enter any 4 digit number : "))
    if(len(num) != 4):
        print("Give a valid input")
        control = 0
    else:
        print(Calc(num))

# highly efficient approach

# kaprekar_constant = 6174


# def find_kaprekar(val, n=0):
#     if val == kaprekar_constant:
#         return n
#     string_val = str(val)
#     string_val = ((4 - len(string_val)) * "0") + string_val
#     asc_val = "".join(sorted(string_val))
#     dec_val = int(asc_val[::-1])
#     asc_val = int(asc_val)
#     value = dec_val - asc_val
#     print('{} - {} = {}'.format(dec_val, asc_val, value))
#     return find_kaprekar(value, n+1)


# print(find_kaprekar('0001'))

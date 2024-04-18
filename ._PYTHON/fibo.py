def fibonac(a, b ,l):
    print(a)
    print(b)
    for i in range(l-2):
        c = a + b
        print(c)
        a = b
        b = c
        
    print("infibo"+__name__)
        
fibonac(0,1,100)
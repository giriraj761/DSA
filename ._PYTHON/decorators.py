def div(a,b):
    return (a/b)

# the outer function calls a new inner func that does the modified job than returns the new values to the outer function that again returns the inner function that takes over as the new modified function 
# this is not available in many languages so PYHTON is great

def smartdiv(func):
    def newdiv(a,b):
        if a<b:
            a,b=b,a
        return func(a,b)
    return newdiv

div = smartdiv(div)
print(div(2,4))

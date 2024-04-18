classHeld = int(input("enter the total number of classes :")) 
classAtt = int(input("enter the number of classes attended :"))

if ((classAtt/classHeld)*100) < 70:
    print("Not allowed")
else:    
    print("allowed")
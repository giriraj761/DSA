def getPoint(n):
    if n >= 90 and n <= 100:
        print("grade is {} ".format('O'))
        return 10
    elif n >= 80 and n < 90:
        print("grade is {} ".format('E'))
        return 9
    elif n >= 70 and n < 80:
        print("grade is {} ".format('A'))
        return 8
    elif n >= 60 and n < 70:
        print("grade is {} ".format('B'))
        return 7
    elif n >= 50 and n < 60:
        print("grade is {} ".format('C'))
        return 6
    elif n >= 40 and n < 50:
        print("grade is {} ".format('D'))
        return 5
    else:
        print("grade is {} ".format('F'))
        return 2

credit1 = [3, 3, 4, 2, 2]
credit2 = [3, 4, 3, 1, 1]
sem1marks = []
sem2marks = []
i = 0
ci1 = 0
ci2 = 0
for j in range(5):
    n = int(input("enter marks of subject {} for {} semester :".format(j+1, i+1)))
    sem1marks.append(n)
    point = getPoint(n)
    ci1 = ci1 + credit1[j]*point

i = i+1
for j in range(5):
    n = int(input("enter marks of subject {} for {} semester".format(j+1, i+1)))
    sem2marks.append(n)
    point = getPoint(n)
    ci2 = ci2 + credit2[j]*point

print("\n\nSGPA for 1st and 2nd semester are : {:.2f} and {:.2f} \n".format(
    ci1/sum(credit1), ci2/sum(credit2)))

print("The CGPA is : {:.2f} ".format((ci1+ci2)/(sum(credit1)+sum(credit2))))

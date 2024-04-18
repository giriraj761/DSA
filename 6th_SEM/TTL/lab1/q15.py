empSalary = []
empYearOfService = []
empAge = []
netBonus = 0
youngest = 999
youngestPOS = -999
oldest = -999
oldestPOS = -999

for i in range(1,4):
    Salary = int(input("enter the salary of employee {} : ".format(i)))
    YearOfService = int(input("enter the duration employee has served {} : ".format(i)))
    Age = int(input("enter the age of employee {} : ".format(i)))
    empSalary.append(Salary)
    empYearOfService.append(YearOfService)
    empAge.append(Age)
    netBonus = netBonus + Salary*0.1
    if(Age>oldest):
        oldest = Age
        oldestPOS = i-1
    if(Age<youngest):
        youngest = Age
        youngestPOS = i-1
                
print("the net Bonus is : {} ".format(netBonus))
print("the youngest employee is {} with salary {} and duration of service {} ".format(youngestPOS+1,empSalary[youngestPOS],empYearOfService[youngestPOS]))
print("the oldest employee is {} with salary {} and duration of service {} ".format(oldestPOS+1,empSalary[oldestPOS],empYearOfService[oldestPOS]))


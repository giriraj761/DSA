#include <cstring>
#include <iostream>
#include <math.h>
using namespace std;
class student
{
    string name;
    int roll;
    float totalMarks;

public:
    student()
    {
        cout << "Enter the name of the student.";
        cin >> name;
        cout << "Enter the roll of " << name << ".";
        cin >> roll;
        cout << "Enter the total marks of " << name << ".";
        cin >> totalMarks;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << roll << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};
int main()
{
    student s1;
    s1.display();
}
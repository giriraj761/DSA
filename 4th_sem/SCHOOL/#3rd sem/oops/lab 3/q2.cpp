#include <cstring>
#include <iostream>
#include <math.h>
using namespace std;
class student
{
private:
    string name;
    int roll;
    float totalMarks;
    float marks[5];

public:
    student()
    {
        cout << "Enter the name of the student.";
        cin >> name;
        cout << "Enter the roll of " << name << ".";
        cin >> roll;
        getMarks();
    }
    void getMarks()
    {
        totalMarks = 0;
        cout << "Enter the marks of 5 subjects.";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
            totalMarks += marks[i];
        }
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << roll << endl;
        cout << "Total Marks: " << totalMarks << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Mark in subject " << i << ": " << marks[i] << endl;
        }
    }
};
int main()
{
    student s1;
    s1.display();
}
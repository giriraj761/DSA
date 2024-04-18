#include<iostream>
#include<math.h>
using namespace std;

class student
{
    protected:
    string name;
    int rollno;
    public:
    void getdata()
    {
        cout<<"enter the name of student : ";
        cin>>name;
        cout<<"enter the rollnumber of student : ";
        cin>>rollno;
    }    
};
class sport :  virtual public student
{
    public:
    int s_grade;

};
class exam : virtual public student
{
    public:
    int e_grade;
};
class result :  public sport , public exam
{
    public:
    void getdata()
    {
        student::getdata();
        cout<<"enter the sport grade of student : ";
        cin>>s_grade;
        cout<<"enter the exam grade of student : ";
        cin>>e_grade;
    }
    void display()
    {
        cout<<name<<endl<<rollno<<endl<<s_grade<<endl<<e_grade<<endl;
    }
};

int main()
{
    result obj;
    obj.getdata();
    obj.display();
    return 0;
}
#include<iostream>
using namespace std;

struct student 
{
    char name[50];
    char gender;
    int roll;
    int totmarks;
};

int main()
{
    cout<<"ENTER THE NUMBER OF STUDENTS YOU WANT TO ENTER ";
    int n;
    cin>>n;
    struct student std[n];

    cout<<"PLEASE ENTER THE DETAILS OF THE STUDENTS";
    for(int i=0; i<n ;i++)
    {
        cout<<"FOR STUDENT "<<i+1<<"\n\n";
        cout<<"NAME :";cin>>std[i].name;
        cout<<"ROLL NUMBER :";cin>>std[i].roll;
        cout<<"GENDER :";cin>>std[i].gender;
        cout<<"TOTAL MARKS :";cin>>std[i].totmarks;
    }

    system("cls");
    cout<<"THE INFORMATION OF THE STUDENTS ARE :\n\n";
    for(int i=0; i<n ;i++)
    {
        cout<<"FOR STUDENT "<<i+1<<"\n\n";
        cout<<"NAME :"<<std[i].name<<"\n";
        cout<<"ROLL NUMBER :"<<std[i].roll<<"\n";
        cout<<"GENDER :"<<std[i].gender<<"\n";
        cout<<"TOTAL MARKS :"<<std[i].totmarks<<"\n";
        cout<<endl<<endl;
    }
    return 0;
}
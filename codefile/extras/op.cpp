#include<iostream>
using namespace std;

int main()
{
     int a =10,*ptr;
     int &ra=a;
     ptr=&a;
     cout<<"a= "<<ra<<"  "<<ptr;

     return 0;
}
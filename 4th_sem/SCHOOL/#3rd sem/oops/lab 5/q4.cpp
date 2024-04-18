#include<iostream>
#include<string.h>
using namespace std;

class time
{
    public:
    int h,m,s;

    time() //fixed predefined time
    {
        h=11;
        m=40;
        s=12;
    }
    void display()
    {
        cout<<"the time is "<<h<<":"<<m<<":"<<s<<"\n";
    }

};
    void displaysum(time obj1 ,time obj2)
    {
        int ss=0,mm=0,hh=0;
        ss=obj1.s+obj2.s;
        mm=obj1.m+obj2.m;
        hh=obj1.h+obj2.h;

        if(ss>59)
        {
            mm+=ss/60;
            ss=ss%60;
        }
        if(mm>59)
        {
            hh+=mm/60;
            mm=mm%60;
        }
        cout<<"the total time is "<<hh<<":"<<mm<<":"<<ss<<"\n";
    }


int main()
{
    time t1;
    time t2;
    t1.display();
    t2.display();
    displaysum(t1,t2);

    return 0;
}
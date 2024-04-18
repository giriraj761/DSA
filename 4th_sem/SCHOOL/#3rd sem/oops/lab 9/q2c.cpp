#include<iostream>
#include<math.h>
using namespace std;

class account{
    public:
    virtual void widthdrawl(float amt){
        cout<<"the amount was withdrawled :";
    }
};
class current : public account{ 
    float overdue;
    public:
    current(){}
    current(float f){
        overdue=f;
    }
    void widthdrawl(float amt){
        if(overdue < amt )
        {
            cout<<"withdrawl not permited";
            return;
        }
        cout<<"the amount of rs "<<amt<<" was withdrawled from you current account\n";
    }
};
class savings : public account{
    float mini;
    float total;
    public:
    savings(){}
    savings(float h, float t){
        mini = h;
        total = t;
    }
    void set_total(int t){
        total =t;
    }
    void set_mini(int min){
        mini=min;
    }
    void widthdrawl(float amt){
        if(total-amt<mini)
        {
            cout<<"withdrawl not permited (minibalance reached)"<<endl;
            return;
        }
        total-=amt;
        cout<<"the amount of rs "<<amt <<" was withdrawl from your saving account and now you have remining ammount of rs "<<total<<" "<<endl;
    }
};

int main()
{
    account *r,*s;
    current reg(5000);
    savings sav;
    sav.set_mini(5000);
    sav.set_total(10000);
    r=&reg;
    s=&sav;
    r->widthdrawl(700);
    s->widthdrawl(4000);
    s->widthdrawl(500);
    s->widthdrawl(500);
    s->widthdrawl(500);
    return 0;
}
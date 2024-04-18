#include<iostream>
#include<math.h>
using namespace std;

class employeee{
    public:
    virtual void pay(){
        cout<<"the pay is :";
    }
};
class regular : public employeee{ 
    float basicpay,da,hra;
    public:
    regular(){}
    regular(float bp,float d,float h){
        basicpay=bp;da=d;hra=h;
    }
    void pay(){
        cout<<"the pay for regualar is :"<<basicpay+da+hra<<endl;
    }
};
class partimer : public employeee{
    int hrs;
    float payhrs;
    public:
    partimer(int h,float p){
        hrs=h;payhrs=p;
    }
    void pay(){
        cout<<"the pay for partimer is :"<<hrs*payhrs<<endl;
    }
};

int main()
{
    employeee *r,*p;
    regular reg(5000,500,1000);
    partimer par(10,800);
    r=&reg;
    p=&par;
    r->pay();
    p->pay();
    reg.employeee::pay();
    return 0;
}


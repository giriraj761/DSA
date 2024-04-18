#include<iostream>
#include<time.h>
using namespace std;

class shop
{
    int code,quantity;
    string name;
    float price=0.0;
    float totalitm;
    static float grand;

    public:   

    void updatelist(string rname,int rcode, int rquantity, float rprice)
    {
        name=rname;
        code=rcode;
        quantity=rquantity;
        price=rprice;

        totalitm=rquantity*rprice;

    }
    // float gettotalitm()
    // {
    //     return totalitm;
    // }
    static void getgrand()
    {
        cout<<grand;
    }
    void upgrand()
    {
        grand+=totalitm;
    }
    void getdata(int i)
    {
        cout<<i+1<<"\t"<<code<<"\t"<<name<<"\t"<<price<<"\t"<<quantity<<"\t"<<totalitm<<" \n";
    }
};
float shop::grand;
int main()
{
    shop obj[10];
    int c,q;
    string n;
    float p;
    // float grandtotal=0;

    cout<<"Enter the name code quantity and price of 10 products\n";
    for(int i=0;i<10;i++)
    {
        cout<<"\n\nproduct "<<i+1<<"\nname \tcode\tquantity\tprice"<<endl;
        cin>>n>>c>>q>>p;
        obj[i].updatelist(n,c,q,p);
       
    }
    system("cls");
    cout<<"shopping bill\ns.no\tcode\tname\t\tquantity\tprice\ttotal\t\n\n";
    for (int i = 0; i < 10; i++)
    {
        obj[i].getdata(i);
        // grandtotal+=obj[i].gettotalitm();
        obj[i].upgrand();
    }
    // cout<<"\nThe grand total is :"<<grandtotal<<endl;
    //shop::gettotalitm();
    cout<<"\n";
    shop::getgrand();
    
    return 0;
}
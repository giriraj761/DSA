#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
using namespace std::chrono;
using namespace std;

int getB()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(-200, 200);
    return distr(gen);
}
void guessing(int a, int b, int mid,int itr,int h ,int l)
{
        mid = ((a+b)/2);
        if(itr > 1 && !h && l)
        {
            itr=itr/2;
        }
        cout<<a;
        if(a==b)
        {
            cout<<"found\n";
            return;
        }
        else if (a < b)
        {
            cout << "try a higher number \n";   
            guessing(a+itr,b,mid,itr,1,0);
        }
        else
        {
            cout << "try a lower number\n";
            guessing(a-itr,b,mid,itr,0,1);
        }
}
int main()
{
    cout << "\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";
    int a = 10;
    int b = getB()*10;
    guessing(a, b,1,10000,1,0);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    clock_t start, end;
    start = clock();

    int a = 6000 , b = 500;

    int c = ((a+b) - abs(a-b))/2;
    // int d = abs(c - a);
    cout<<c;
    
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout<<"\n\nTime taken by program is :"<<fixed<< time_taken << setprecision(5);
    cout<<"sec"<<endl;
    
    return 0;
}
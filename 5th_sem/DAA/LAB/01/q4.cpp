#include <bits/stdc++.h>
using namespace std;

swapp3(int x ,int y , int z)
{
    cout<<"before ->\n"<<"x :"<<x<<"\ny :"<<y<<"\nz :"<<z<<endl;
    swap(x,y);
    swap(x,z);
    cout<<"After ->\n"<<"x :"<<x<<"\ny :"<<y<<"\nz :"<<z<<endl;
}
int main()
{
    clock_t start,end;
    start= clock();

    cout<<"1973 GIRIRAJ KRISHNA SHARMA\n\n";
    int x,y,z;
    cout<<"enter 3 variables \n";cin>>x>>y>>z;
    swapp3(x,y,z);
    
    end = clock();


    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}
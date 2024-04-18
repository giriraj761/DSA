#include <bits/stdc++.h>
#include<chrono>
#include<unistd.h>
using namespace std::chrono;
using namespace std;

int _intSqrt(int x)
{
    if (x == 0 || x == 1)
    return x;

    int i = 1, res = 1;
    while (res <= x)
    {
      i++;
      res = i * i;
    }
    return i - 1;
}
int main()
{
    cout<<"\n\n20051973 GIRIRAJ KRISHNA SHARMA\n\n";
    int n ;
    cout<<"enter n ";
    cin>>n;
    auto start = system_clock::now();
    sleep(1);
        cout<<_intSqrt(n);
    auto end = system_clock::now();
    cout << "\nTIME TAKEN : " <<duration_cast<nanoseconds>(end - start).count() / pow(10, 9) - 1<< endl;
    return 0;
}
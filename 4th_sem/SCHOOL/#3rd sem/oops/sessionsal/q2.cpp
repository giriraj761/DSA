#include <iostream>
using namespace std;
template <class T>

T findmin(T arr[], int n) {

    T min = 999999;
    for(int i =0 ;i <n ;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main() {
	int a[5] = {10, 50, 30, 40, 20};
    float f[5]= {10.25, 10.22, 10.01, 10.55, 10.99};

    cout<<"integer minimum :";
    cout<<findmin(a,sizeof(a) / sizeof(a[0]));
    cout<<endl<<"float minimum  :";;
    cout<<findmin(f,sizeof(f) / sizeof(f[0]));
	cout << endl;

return 0;
}
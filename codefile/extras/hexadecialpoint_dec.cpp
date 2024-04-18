#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    float hex = 23.124;
    float point;
    int inthex = (int)hex;
    int temp;
    int i = 0;
    int z = 0;
    char arr[100];

    point = hex - floor(hex);

    while (inthex > 0)
    {
        temp = inthex % 16;
        // cout << temp << endl;
        if (temp < 10)
        {
            arr[i] = temp + 48; //ascii number
            i++;
        }
        else
        {
            arr[i] = temp + 55; //ascii characters capital
            i++;
        }
        inthex /= 16;
    }
    while (z < 8)
    {
        if(point == 0)//when point is zero we exit
        {
            break;
        }

        point *= 16;
        temp = (int)point % 16;

        if (temp < 10)
        {
            arr[i] = temp + 48;
            i++;
        }
        else
        {
            arr[i] = temp + 55;
            i++;
        }

        z++;

        point -= floor(point);

    }
    cout<<i<<" "<<z<<endl;
    int f = i - z;

    for (int  q = 0; q < (f)/2; q++)
    {
        swap(arr[q],arr[f-q-1]);
    }

    int a = 0;

    arr[i-1]=arr[i-1]-1; //fine tuning the last hexnumber

    while (a!=i)
    {
        if(a==f)
        {
            cout<<".";
        }
        cout<<arr[a];
        a++;
    }
    return 0;
}
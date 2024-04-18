#include<iostream>

using namespace std;

int main(){
    int i,j;
    int coff=1;

    for (i=1;i<=6;i++)
    {
        coff=1;
        for(j=1;j<=i;j++)
        {
            cout<<coff<<" ";
            coff=coff*(i-j)/j;
        }
        cout<<endl;
    }
}
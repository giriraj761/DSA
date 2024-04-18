

//easy baby

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int bin;
    cout<<"please enter a binary number      ";
    cin>>bin;

    int dec=0,i=0;

    while (bin>0)
    {
       dec=dec+(bin%10*pow(2,i));
       i++;
       bin=bin/10;
    }
       
    cout<<"\n"<<dec;

  
    return 0;
}
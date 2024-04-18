#include<iostream>
using namespace std;

int main(){

    int dec;
    cout<<"please enter a decimal number      ";
    cin>>dec;

    int bin[10];
    int i=0 , length=sizeof(bin)/sizeof(bin[0]);

    for (i = 0; i <length; i++)
    {
        bin[i]=-1;
    }
    
     i=0;

     while(dec>0)
    {
        bin[i]=dec%2;
         i++;
        dec=dec/2; 
    }

    for(i=length-1;i>=0;i--)
    {
        if(bin[i]!=-1)
        {
            cout<<bin[i];
        }  
    }
    
    return 0;
}
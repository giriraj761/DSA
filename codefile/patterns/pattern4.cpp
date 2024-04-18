#include <iostream>
using namespace std;

int main (){

      int n,a=10,i,j,k,l;

      for(i=10;i>=1;i--)
      {
          for(j=1;j<=i;j++)
         {
             cout<<" ";
         }
          for( k=a;k<=10;k++)
          {
              if(k==10){
                  cout<<"0"<<" ";
              }
              else
              {
                 cout<<k<<" ";
              }      
          }
           for( l=9;l>=a;l--)
          {
              cout<<l<<" ";
          }
          cout<<endl;
          a--;
      } 
}      


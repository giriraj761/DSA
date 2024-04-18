#include <iostream>
using namespace std;

int main (){

      int n,a=1,i,j,k,l;
      int c;
      cout<<" enter no of lines :";
      cin>>n;

      for(i=n;i>=1;i--)
      {
          c=a;
         for(j=1;j<=i;j++)
         {
             cout<<" ";
         }
          for( k=a;k>=1;k--)
          {
               if(k==a)
               {
                cout<<k;
               }
              else if(k==1)
              {
                  cout<<k;
              }
              else
              {
                  cout<<"0";
              }
          }
           for( l=2;l<=a;l++)
          {
              if(l!=a){
                cout<<"0";
              }
              else
              {
                  cout<<a;
              }
  
          }
          cout<<endl;
          a++;
      } 
}      
#include <iostream>
using namespace std;

int main (){

      int n,a=1,i,j,k,l;
      char b='A';
      cout<<" enter no of lines :";
      cin>>n;

      for(i=n;i>=1;i--)
      {
         for(j=1;j<=i;j++)
         {
             cout<<" ";
         }
          for( k=a;k<=a*2-1;k++)
          {
             cout<<k;
          }
          for(l=2*a-1;l>a;l--)
          {
              cout<<l-1;
          }
          cout<<endl;
          a++;
      } 
}      
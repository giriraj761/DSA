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
             cout<<"*";
         }
          for( k=1;k<=a;k++)
          {
             cout<<" ";
          }
          for(l=1;l<a;l++){
              cout<<" ";
          }
          for(j=1;j<=i;j++)
         {
             cout<<"*";
         }
          cout<<endl;
          a++;
      }     
         a=1;
         int c=n;
       for(i=1;i<=n;i++)
      {
         for(j=1;j<=i;j++)
         {
             cout<<"*";
         }
          for(k=n;k>=a;k--)
          {
             cout<<" ";
          }
           for(l=2;l<=c;l++){
              cout<<" ";
          }
          for(j=1;j<=i;j++)
         {
             cout<<"*";
         }
          cout<<endl;
          a++;
          c--;
      }

    return 0;
}
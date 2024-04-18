#include <iostream>
using namespace std;

int main ()
{
  int a=1,i,j,k;
  int coff;

  // system("CLS");

    for(i=6;i>=1;i--)
    {  
      for(j=1;j<i;j++)
      {
        cout<<" ";
      }

      coff=1;

      for( k=1;k<=a;k++)
      {
        cout<<coff<<" ";
        coff=coff*(a-k)/k;
      }        
      cout<<endl;
      a++;  
               
    } 
}   
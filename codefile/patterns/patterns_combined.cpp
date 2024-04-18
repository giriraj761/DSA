#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void Pattern_basic()
{
    cout<<"**********pattern basic**********\n\n";
    int n,i,j;

       cout<<"Please enter no of rows\n";
       cin>>n;
       cout<<"\n\n";

       for(i=0;i<n;i++)
       {
          for ( j = 0; j <=i; j++)
          {
              cout<<"*";
          }
          cout<<endl;
       }
        
    cout<<"\n\n";
}

void Reverse_Pattern_basic()
{
    cout<<"**********reverse pattern basic**********\n\n";
    int n,i,j,k,a=1;

       cout<<"Please enter no of rows\n";
       cin>>n;
       cout<<"\n\n";

       for(i=n;i>=1;i--)
       {
          for ( j=1; j<i; j++)
          {
              cout<<" ";
          }
          for ( k = 1; k <=a; k++)
          {
              cout<<"*";
          }
          a++;
          cout<<endl;
       }
        
    cout<<"\n\n";
}

void pascals_triangle()
{
       cout<<"**********pascals triangle**********\n\n";
      int a=1,i,j,k,n;
      int coff;
        
       cout<<"Please enter no of rows\n";
       cin>>n;
       cout<<"\n\n";

      for(i=n;i>=1;i--)
      {  
          for(j=1;j<i;j++){
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
  cout<<"\n\n";
}


int main()
{
    int num;

   while(num!=0)
   {
       
       cout<<"Please select your pattern choice\n0.exit code\n1.pattern basic\n2.reverse pattern Basic\n3.pascals triangle\n\nNOTE: Entering any other number will terminat the code\n";
       cin>>num;

    switch (num)
    {
     case 0:
        system("CLS");
        cout<<"ending code\n\n";
        break;

     case 1:
        system("CLS");
        Pattern_basic();
        break;

     case 2:
        system("CLS");
        Reverse_Pattern_basic();
        break;
    
     case 3:
        system("CLS");
        pascals_triangle();
        break;

     default:
        system("CLS");
        num=0;
        cout<<"ending code\n\n";
        break;
    }

   }
   cout<<"\n\n\n\t\t||*******||_Program_ENDED_||*******||\n\n\n\n\n\n";
}
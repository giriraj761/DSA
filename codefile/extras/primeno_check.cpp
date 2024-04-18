#include<iostream>
using namespace std;

int main(){
 
 int i,num,j;
 bool is_Prime=true;
     
     cout<<"Please enter a number";
     cin>>num;

   for(i=2;i*i<=num;i++)
   {
       if(num%i==0){
           is_Prime=false;
           break;
       }
   }
  
     if(is_Prime)
     {
        cout<<"Yes it is a prime no. and its only two factors are:"<<" 1 and "<<num;
     }
     
     else
     {
          cout<<"No it is not a prime no. and it has factors: \n";

          for(j=1;j<=num;j++)
          {
              if(num%j==0)cout<<j<<" ";
          }
     }
}
/*  taker uer input of n which will be the array szie (n is always even)
   now for the 1st half of the array take the 1st digit and 
   for the second half take the last digit.
    
   form a new digit for n length holding all the extracted digits 
   and check its divisibility by 11 

   if true print OUI
   else print NON

   SAMPLE INPUT
   6
   15478
   8452
   8232
   874
   985
   4512

   OUTPUT -- OUI
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[100000];
    int n; 
    cin>>n;
   long long int digit=0;
    int rev;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
  

    for (int i = 0; i < n/2; i++)
    {
        rev=0;
        while(arr[i]!=0)
        {
            rev=rev*10+(arr[i]%10);
            arr[i]=arr[i]/10;
        }
        arr[i]=rev;
    }

     for (int i = 0; i < n; i++)
    {
        digit=digit*10+(arr[i]%10);
    } 
    
    if(digit%11==0)
    {
        cout<<"OUI";
    }
    else
    {
        cout<<"NON";
    }

     return 0;
}
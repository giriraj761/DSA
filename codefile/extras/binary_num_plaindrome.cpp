#include<iostream>
using namespace std;

int reversenum(int num)
{
    int rev=0;
    while (num>0)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    
    return rev;
}

bool palindrome(int num)
{
    int rev=reversenum(num);

    if(num==rev)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

long tobinary(int dec)
{
    int dig=0,i=1;
    long bin=0;
    while (dec>0)
    {
     dig = dec%2;
     dec = dec/2;
     bin += dig*i;
     i = i*10;
    } 

    return bin;
}

int main()
{
    int n;
    long bin;
    bool isprime,plain=false,plainbin=false,flag=false;
    cout<<"enter the range ";cin>>n;

    for (int i = 10; i < n; i++)
    {
        isprime=true;
        for(int j=2; j*j<=i ;j++)
        {
            if(i%j==0)
            {
                isprime=false;
                break;
            }
        }  
        if (isprime)
        {
            plain = palindrome(i);
            bin=tobinary(i);
            plainbin=palindrome(bin);

            if(plain)
            {
                cout<<"the decimal prime is plaindrome: "<<i<<" "<<bin<<" \n";
                flag=true;
            }
        } 
    }  

    if(!flag)
    {
        cout<<" no such number found in the range";
    }
    
    return 0;
    
}

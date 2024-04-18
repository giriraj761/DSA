#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int len(int n)
{
    int l=0;
    while(n>0)
    {
        l++;
        n/=10;
    }
    return l;
}
int arm(int num)
{
    int l=len(num);
    int armNum=0;
    while(num>0)
    {
        
        armNum+=round(pow(num%10,l));
        num/=10;
        
    }
    return armNum;
}
void prime(int number)
{
    bool isprime=true;
    for (int i = 2; i*i <=number; i++)
    {
        if(number%i==0)
        isprime=false;
    }
    (isprime==true)?printf("yes prime \n"):printf("not a prime number\n");
}
void perfect(int number)
{
    int sum=1;
    for (int i = 2; i <number; i++)
    {
        if(number%i==0)
        {
            sum+=i;
        }
    }
    (number==sum)?printf("yes perfect\n"):printf("not a perfect number\n");
}
void main()
{
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    prime(number);
    perfect(number);
    if(number==arm(number))
    {
        printf("Number is Armstrong.");
    }
    else{
        printf("Number is not Armstrong.");
    }  
}
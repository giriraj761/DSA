#include <stdio.h>
#include<math.h>

int len(int num)
{
    int l=0;
    while (num>0)
    {
        l++;
        num/=10;   
    }
    return l;
}

int main() 
{
    int num,comp,arm=0,rem;
    printf("\n\n\nEnter a number: "); scanf("%d", &num);
    comp = num;
    int l=len(num); //to find the length of the digits

    while (num>0) 
    {    
       rem=num%10;
       arm= arm +  round(pow(rem,l));
       num /= 10;
    }

     (comp == arm)?
       printf("%d is an Armstrong number.", comp):
        printf("%d is not an Armstrong number.", comp);

    return 0;
}
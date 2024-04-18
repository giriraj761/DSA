#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float deter(int  a, int  b, int c)
{
    return((b*b)-(4*a*c)); 
}

int main()
{
    int a,b,c;
    printf("please enter the coffecients of the quadratic equn:");
    scanf("%d %d %d",&a,&b,&c);
    float d = deter(a,b,c);
    float r1,r2,ir;
    if(d<0)
    {
        r1=-b/(2*a);
        ir=sqrt(-d)/(2*a);
        ir=abs(ir);
        printf("the two roots are :\n%0.2f - %0.2fi\n%0.2f + %0.2fi\n ",r1,ir,r1,ir);
    }   
    else
    {
        d=sqrt(d);
        r1=(-b+d)/(2*a);
        r2=(-b-d)/(2*a);
        printf("the two roots are :\n%f\n%f\n ",r1,r2);
    }

    return 0;
}
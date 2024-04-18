#include<stdio.h>
int main()
{
    int h1,m1,s1,h2,m2,s2;
    printf("enter two time in format(hh:mm:ss)\n");
    printf("time 1- "); scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("time 2- "); scanf("%d:%d:%d",&h2,&m2,&s2);

    int h,m,s;
    h=h1+h2;
    m=m1+m2;
    s=s1+s2;

    if(s>59)
    {
        m+=s/60;
        s=s%60;
    }

    if(m>59)
    {
        h+=m/60;
        m=m%60;
    }

    printf("\n\nthe new time is :%d:%d:%d\n\n",h,m,s);

    return 0;

}
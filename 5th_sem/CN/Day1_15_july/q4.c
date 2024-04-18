#include <stdio.h>
struct pkt
{
    char ch1,ch3;
    char ch2[2];
}obj;

int lent(int num)
{
    int len=0;
    while (num>0)
    {
        len++;
        num/=10;
    }
    return len;
}
int main ()
{
    int x;
    printf("enter a 4 digit number :");
    scanf("%d",&x);

    int len = lent(x);
    if(len==4)
    { 
    obj.ch1=x%10;
    x=x/10;
    printf("%d \n",obj.ch1);


    // printf("%d \n",x);
    obj.ch2[0]=x%10;
    x=x/10;
    printf("%d \n",obj.ch2[0]);


    // printf("%d \n",x);
    obj.ch2[1]=x%10;
    x=x/10;
    printf("%d \n",obj.ch2[1]);

    obj.ch3=x%10;
    x=x/10;
    printf("%d \n",obj.ch3);
    

    int sum = obj.ch1+obj.ch2[0]+obj.ch2[1]+obj.ch3;
    printf("aggreated number is :%d",sum);
    }
    else{
        printf("please enter a 4 digit number");
    }

    return 0;
}



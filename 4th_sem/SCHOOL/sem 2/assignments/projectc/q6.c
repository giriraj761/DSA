#include<stdio.h>
#include<stdlib.h>

void main()
{
    system("cls");
    int n;
    n = rand();

    printf("%d\n\n",n);

    int *p;
    p = (int*) malloc(n * sizeof(int));

    printf("the elements in the array are:\n\n");
    
    for (int i = 0; i < n; i++)
    {
        *(p+i)=rand()%100;
        printf("%d ",*(p+i));
    }
    printf("start _-------\n\n");
    int a=0;

    while(a!=n)//41
    {
        int min=36500;
        int pos=-1;
        for(int i=a;i<n;i++)
        {
            if(*(p+i)<min)
            {
                min=*(p+i);
                pos=i;
            }
        }
            if(pos!=-1)
            {
                int temp=p[pos];//temp=p[2]
                p[pos]=p[a];   //p[2]=p[0]
                p[a]=temp;    //p[0]=temp
            }
              for (int i = 0; i < n; i++)
               {
               printf("%d ", *(p + i));
               }
               printf("|||a = %d \n\n",a);
            a++;
    }
    printf("\n\n\n");
    printf("the elements after following the shorting process are: \n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n\n");
    free(p);

    return 0;
}
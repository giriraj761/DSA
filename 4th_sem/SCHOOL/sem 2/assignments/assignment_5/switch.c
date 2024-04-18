#include<stdio.h>

int main()
{
    int check; 
    int doing=check;
    do{ 
         printf("\n\nenter \n1. to calculate factorial of a number\n2. to check for the day\n3. to find the max\n\n note any other no will break the flow "); 
         scanf("%d",&check); 

        switch (check)
        {
          case 1:
          {
              printf("factorial :\n");
              int num;
              printf("enter a number");
              scanf("%d",&num);
              int fac=1;
              for (int i = 2; i <=num; i++)
              {
                  fac*=i;
              }
              printf("%d = %d\n\n",num,fac);
              
          }
          break;
          case 2:
          {
              printf("date :\n");
              int num;
              printf("enter a number");
              scanf("%d",&num);
              switch (num)
              {
              case 1:printf("monday\n");
                  break;
              case 2:printf("tuesday\n");
                  break;
              case 3:printf("wednesday\n");
                  break;
              case 4:printf("thursday\n");
                  break;
              case 5:printf("friday\n");
                  break;  
              case 6:printf("saturay\n");
                  break;
              case 7:printf("sunday\n");
                  break;          
              
              default:
              printf("enter a valid number range(0-7)");
                  break;
              }
          }
          break;
           case 3:
          {
              printf("max finder :\n");
              int num, itr;
              printf("enter number of terms  ");
              scanf("%d",&itr);
              int max=0;
              for (int i = 0; i < itr; i++)
              {
                 printf("enter %d term\n",i+1);
                 scanf("%d",&num);
                 if(num>max)
                 { 
                     max=num;
                 }
              }
              printf("max is %d\n",max);  
          }
          break;

          default:
            printf("\nenter a valid choice \ndo u want to continue(1,-1)\n");
            scanf("%d",&doing);
          break;
        }
    }while(doing!=-1);
    return 0;
}
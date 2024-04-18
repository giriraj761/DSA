#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

struct lib
{
    char title[50];
    char author[50];
    int accession;
    int noof;
    bool flag;

}obj[100];

void displaydata(int i)
{
   printf("Title-%s\nAuthor-%s\nAcession number-%d\nnumber of the book present-%d\n\n",obj[i].title,obj[i].author,obj[i].accession,obj[i].noof);
}

 bool strcmpp(char a[],char b[])
 {
   for (int i = 0; a[i] !='\0'; i++)
   {
     if(a[i]!=b[i])
     {
       return false;
     }
   }
   return true; 
}

int main()
{
    
    int n=0;
    char op;
     char c[50];
    int q=1;
    while(q>0)
    {
       system("cls");
        printf("\n\t\twelcome to the LIBRARY\n\n\n");
        printf("A-Display book information.\nB-Add a new book\nC-Displaye the book using the author name\nD-Display the number of books of particular title>.\nE-display total number of books in library\nF-Issue a book\n");
        // scanf("%c",&op);
        op=getchar();
        switch (op)
        {
        case 'A':

        system("cls");
          if(n!=0)
          {
              for (int i = 0; i < n; i++)
              {
                  displaydata(i);
              }
              
          }
          else
          {
              printf("\nThere are currently no books in the libarary\n\n");
          }
        break; 

        case 'B':
          
          printf("\nEnter the book details:\n");
          printf("Title-");scanf("%s",&obj[n].title);
          printf("Author-");scanf("%s",&obj[n].author);
          printf("Accession number-");scanf("%d",&obj[n].accession);
          printf("Number of book to add-");scanf("%d",&obj[n].noof);
          n++;
          printf("The Database was update\n\n");

        break;

        case 'C':

          printf("Search the book by author name\n");
          printf("Enter the author name");scanf("%s",&c);

          for (int i = 0; i < n; i++)
          {
            if(strcmpp(obj[i].title,c)==true)
            {
                displaydata(i);
            }
          }
        break;

        case 'D':

          printf("Search the book by title name\n");
          printf("Enter the author name");scanf("%s",&c);

           for (int i = 0; i < n; i++)
            {
              if(strcmpp(obj[i].title,c)==true)
              {
                  displaydata(i);
              }
            }
        break;

        case 'E':
        {
          int sum=0;
          for (int i = 0; i < n; i++)
          {
              sum+=obj[i].noof;
          }
          printf("The total number of book in the libray are-%d\n\n",sum);
        }
        break;

        case 'F':

        if(n==0)
        {
          printf("no books in the library to issue\n");
          break;
        }

        printf("enter the title of book that you wanna issue");
       
        scanf("%s",&c);

        if(n!=0)
        {
            for (int i = 0; i < n; i++)
            {
               if(strcmpp(obj[i].title,c)==true)
               {
                   obj[i].noof-=1;

                   if (obj[i].noof<=0)
                   {
                       n--;
                   }
                   
                   printf("\n The book was issued .....ThankYou\n");
               }
            }  
        }
        
        break;

        default:
        break;
        
      } 
           printf("Do you wanna continue (<0 to exit)\n\n");scanf("%d",&q); 
    }
    
    printf("ThankYou for your visit ");

    return 0;    
}

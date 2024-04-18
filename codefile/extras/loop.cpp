#include<iostream>
#include<stdlib.h>
using namespace std;


struct cells
{
    public:

    int x,y;
    char state='0';

}obj[100][100];

int main()
{

   for (int i = 0; i <10 ; i++)
    {
        for (int  j = 0; j < 10; j++)
        {
            obj[i][j].x=i;
            obj[i][j].y=j;
        }
    }
  
//   cout<<obj[1][1].x;

  int x=0;
  while (x/10<1)
  {
      system("cls");

    for (int i = 0; i <10 ; i++)
    {
        for (int  j = 0; j < 10; j++)
        {
            cout<<obj[i][j].y<<" ";
        }
        cout<<endl;
    }
    x++;
  }
    return 0;
    
}
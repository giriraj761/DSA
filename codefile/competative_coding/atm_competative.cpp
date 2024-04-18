
#include<iostream>
using namespace std;

int main()
{
    int x; cin>>x;
    float bal; cin>>bal;

      if(x%5==0)
      {
          if(bal>x)
          {
              printf("%.2f\n",bal-x-0.50);
          }
          else
          {
              printf("%.2f\n",bal);
          }
          
      }
      else
      {
          printf("%.2f\n",bal);
      }
      

    return 0;
}
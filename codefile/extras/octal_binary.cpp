#include<iostream>
using namespace std;

int main(){

    int oct,octrev=0;
    cout<<"please enter a octal number      ";
    cin>>oct;

    while (oct>0)
    {
        octrev=octrev*10+oct%10;
        oct/=10;
    }

    while (octrev>0)
    {
        switch (octrev%10)
         {
               case 0:
                cout<<"000";
             break;
               case 1:
                cout<<"001";
             break;
               case 2:
                cout<<"010";
             break;
               case 3:
                cout<<"011";
             break;
               case 4:
                cout<<"100";
             break;
               case 5:
                cout<<"101";
             break;
               case 6:
                cout<<"110";
             break;
               case 7:
                cout<<"111";
             break;
            
            default:
                break;
         }
        octrev/=10;
    }
    
      
    return 0;

}    
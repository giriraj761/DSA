#include<iostream>
using namespace std;

void tower(int n , char s , char h , char d)
{
    if(n==0)
    {
        return ;
    }

    tower(n-1 , s , d , h);
    cout<<"Move Disk "<<n<< " from tower  "<<s<<" to  tower "<<d<<endl;
    tower(n-1 ,  h , s , d);
}

int main()
{
    system("cls");
    system("Color 0A");
    // string str="abc";
    cout<<"\n\n-----------------------TOWER OF HANOI-----------------------\n\n";
    cout<<"its a fun game that was invented in early japan \nThe basic concept is that you are given 3 towers A/B/C where:\n\n 1.Tower A has 'n' number of blocks in it \n 2.Tower B is empty \n 3.Tower C is also empty\n\nThe stacked blocks are in decreasing order in size such that the block on the top is the smallest. \n\n Now you have to move all the blocks from A to C with certain     conditions :: \n\n 1.You can move only one block at a time.\n 2.There can not be a time where a larger block is on top of a     smaller block \n\n\n";
    cout<<"          |           |           |       \n"; cout<<"          |           |           |       \n"; cout<<"          |           |           |       \n"; cout<<"          |           |           |       \n"; cout<<"          |           |           |       \n"; cout<<"         ___          |           |       \n";cout<<"        [___]         |           |       \n"; cout<<"       _______        |           |       \n"; cout<<"      [_______]       |           |       \n";cout<<"     ___________      |           |       \n"; cout<<"    [___________]     |           |       \n\n"; cout<<"--------+ A +-------+ B +-------+ C +-------\n\n";

    cout<<"SO HOW WILL YOU DO IT NOW ??\n\nThe answer to this tower with 3 blocks is :\n\n";
    tower(4,'A','B','C');
    cout<<"\n\n\n\n\n";
    return 0;
}
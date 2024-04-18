
//rule 110

#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    system("cls");
    int n;

    cout<<"enter the number of rows you want to print";
    cin>>n;

    char arr[n][81];
        
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<81;j++)
        {
            arr[i][j]=' ';
        }
    }
    arr[0][40]='#';

    cout<<endl;

    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<80;j++)
        {
            if(arr[i][j-1]==' ' && arr[i][j]==' ' && arr[i][j+1]==' ')//1
            {
                arr[i+1][j]=' ';
            }
            else if(arr[i][j-1]=='#' && arr[i][j]=='#' && arr[i][j+1]==' ')//2
            {
                arr[i+1][j]=' ';
            }
              else if(arr[i][j-1]=='#' && arr[i][j]==' ' && arr[i][j+1]=='#')//3
            {
                arr[i+1][j]=' ';
            }
               else if(arr[i][j-1]=='#' && arr[i][j]=='#' && arr[i][j+1]=='#')//4
            {
                arr[i+1][j]=' ';
            }
               else if(arr[i][j-1]=='#' && arr[i][j]==' ' && arr[i][j+1]==' ')//5
            {
                arr[i+1][j]='#';
            }
               else if(arr[i][j-1]==' ' && arr[i][j]=='#' && arr[i][j+1]=='#')//6
            {
                arr[i+1][j]='#';
            }
               else if(arr[i][j-1]==' ' && arr[i][j]=='#' && arr[i][j+1]==' ')//7
            {
                arr[i+1][j]='#';
            }   
            else if(arr[i][j-1]==' ' && arr[i][j]==' ' && arr[i][j+1]=='#')//8
            {
                arr[i+1][j]='#';
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<81;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    string str="abcde";
    int n=str.size();
    for (int i = 0; i<n; i++)
    {
      int l=i;
       for(int k=0; k<n-i; k++)
       {
          l++;
          for(int j=k; j<l; j++)
          {
            cout<<str[j];  
          }
          cout<<endl;
        }
    }
    cout<<"no of substrings : "<<(n*(n+1))/2;
    return 0;
}

/*
    2nd way
    for(int i=0; i<n; i++)
    {
      for(j=1;j<n-i;j++)
      {
        cout<<str.substr(i,j)<<endl;
      }
    }
*/
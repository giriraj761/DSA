#include<io.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int ox,oy;
    cout<<"enter the order of your polynomial 1 ";cin>>ox;
    cout<<"enter the order of your polynomial 2 ";cin>>oy;
    int x[ox+1],y[oy+1];

    int a[max(ox,oy)+1];
    int p[(ox+oy)+1];
    cout<<"for 1st polynomial\n";

    for(int i=0 ; i<ox+1; i++)
    {
        cout<<"enter the cofficient of x ^"<<i<<" ";
        cin>>x[i];
    }
    
     cout<<"for 2nd polynomial\n";

    for(int i=0 ; i<oy+1; i++)
    {
        cout<<"enter the cofficient of x ^"<<i<<" ";
        cin>>y[i];
    }

    for (int i = 0; i < max(ox,oy)+1; i++)
    {
        if(i>ox)
        {
            a[i]=y[i];
            continue;            
        }
        if(i>oy)
        {
            a[i]=x[i];
            continue;
        }

        a[i]=x[i]+y[i];
    }

    for(int i=0; i<ox+1;i++)
    {
        for(int j=0;j<oy+1;j++)
        {
            p[i+j]=x[i]*y[j];
        }
        
    }

    cout<<"\nThe addition of the polynomial is :\n";

    for (int i = 0; i < max(ox,oy)+1; i++)
    {
        if(i!=max(ox,oy))
        {
          cout<<a[i]<<"^"<<i<<" + ";
        }
        else
        {
            cout<<a[i]<<"^"<<i<<" ";
        }

    }
    cout<<"\n\nThe product is \n";

    for(int i=0 ;i<ox+oy+1 ;i++)
    {
       if(i!=ox+oy)
        {
          cout<<p[i]<<"x^"<<i<<" + ";
        }
        else
        {
            cout<<p[i]<<"x^"<<i<<" ";
        }   
    }
    

    return 0;
}
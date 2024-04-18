//min dist
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE LENGTH OF THE ARRAY";
    cin >> n;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int max1=INT16_MIN,min1=INT16_MAX,pos1=-10,pos2=-10;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {max1=arr[i]; pos1=i;}
        if(arr[i]<min1)
        {min1=arr[i];pos2=i;}
    }
    
    max1=INT16_MIN;
    min1=INT16_MAX;

    for(int i=0;i<n;i++)
    {
        if(i!=pos1 && i!=pos2)
        {
          if(arr[i]>max1)max1=arr[i];
          if(arr[i]<min1)min1=arr[i];
        }
    }
 
    cout<<max1<<" "<< min1;
}
/* 2nd way 

    int max2=INT16_MIN;
    int min2=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max2 && arr[i]<max1)
        {
            max2=arr[i];
        }
        if(arr[i]<min2 && arr[i]>min1)
        {
            min2=arr[i];
        }
    }
    cout <<"\n--"<< max2<< " " << min2;
    
*/
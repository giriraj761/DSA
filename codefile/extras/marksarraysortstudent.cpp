#include<iostream>
using namespace std;

struct student 
{
    char name[50];
    int marks[5];
    int roll;
};

void heapify(int arr[],int n,int i)
{
    int left=2*i+1; int right=2*i+2; int largest =i;

    if(left<n && arr[left]>arr[largest])
    {
        largest=left;
    }
    if(right<n && arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void buildheap(int arr[],int n)
{
    for(int i=n/2-1; i>=0; i--)
    {
        heapify(arr,n,i);
    }
    for (int i = n-1; i > 0; i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    } 
}
int findtotal(struct student obj)
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=obj.marks[i];
    }
    return sum;
}
int main()
{
    system("cls");
    int n=0;
    cout<<"enter the number of students u wanna enter marks for\n";
    cin>>n;
    cout<<endl;

    int total[n];
    float per[n];

    student obj[n];
    for(int j=0 ;j<n ; j++)
    {
        cout<<"\tFor Student "<<j+1<<"\n\n";
        cout<<"Enter the name of the student :\n";
        cin>>obj[j].name;
        cout<<"ENTER THE ROLL NUMBER\n";
        cin>>obj[j].roll;
        cout<<"Enter the marks in 5 subjects\n";
        for(int i =0 ; i<5 ; i++)
        {
            cin>>obj[j].marks[i];
        }

        buildheap(obj[j].marks,5);  // to sort the marks array inside structure
        total[j]=findtotal(obj[j]);
    }

    for(int j=0;j<n ;j++)
    {
        cout<<"\tFor student "<<j+1<<"\n\n";
        cout<<"NAME: "<<obj[j].name<<"\n";
        cout<<"ROLL NUMBER: "<<obj[j].roll<<"\n";
        cout<<"MARKS IN 5 SUBJECTS: \n";
        for (int i = 0; i < 5; i++)
        {
        cout<<obj[j].marks[i]<<" ";
        }
        cout<<"\nTOTAL MARKS : "<<total[j]<<"\n";
        per[j]=total[j]/5.0;
        cout<<"THE PERCENTAGE IS :"<<per[j]<<"\n\n";
    }

    cout<<"SEARCH STUDENT BY ROLL NUMBER\nPLEASE ENTER A ROLL NUMBER \n";
    int rn ;
    cin>>rn;

     for(int j=0;j<n ;j++)
    {
        if(rn==obj[j].roll)
        {
            cout<<"\tTHE FOUND DETAILS ARE \n\n";
            cout<<"NAME: "<<obj[j].name<<"\n";
            cout<<"MARKS IN 5 SUBJECTS: \n";
            for (int i = 0; i < 5; i++)
            {
            cout<<obj[j].marks[i]<<" ";
            }
            cout<<"\nTOTAL MARKS : "<<total[j]<<"\n";
            cout<<"THE PERCENTAGE IS :"<<per[j]<<"\n\n";
        }
    }



    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

void printstack(stack<int> st)
{
    cout<<"\ntop ==>  ";
    while(st.empty()==false)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<" <== end\n\n";
}

stack<int> sortstack(stack<int> st)
{
    stack<int> temp;
    while (st.empty()==false)
    {
        int x = st.top();
        st.pop();

        if(temp.empty()==false && temp.top()<x){
            temp.push(x);
        }
        else{
            while(temp.empty()==false && temp.top()>x)
            {
                st.push(temp.top());
                temp.pop();
            }
            temp.push(x);
        }
    }

    return temp;
    
}
void updatearr(stack<int> st ,int arr[],int i)
{
    i--;
    while(st.empty()== false)
    {
        arr[i]=st.top();
        st.pop();
        i--;
    }
    
}
int main()
{
    stack<int> st;
    int n;cout<<"enter the size of array : ";cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        st.push(arr[i]);
    }
    
    printstack(st);

    st = sortstack(st);
    updatearr(st,arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
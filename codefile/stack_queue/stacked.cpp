#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(30);
    st.push(200);
    cout<<st.top();
    st.pop();
    cout<<"\n";
    cout<<st.top();

    return 0;

}
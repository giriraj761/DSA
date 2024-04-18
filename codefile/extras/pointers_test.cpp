#include<iostream>
using namespace std;

int main(){
    
    int x=4;
    int *p;
    int **q;
    p=&x;
    q=&p;

    cout<<p<<" "<<*p<<" "<<q<<" "<<*q<<" "<<**q;
}
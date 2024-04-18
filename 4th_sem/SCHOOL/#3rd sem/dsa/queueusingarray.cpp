#include<iostream>
using namespace std;

struct Queue{
    int start=0,end=-1;
    int arr[1000];

    public:

    void enqueue(int x){
        if(is_full()==false){
            arr[++end]=x;
            return ;
        }
        else{
            cout<<"queue is full ";
            return ;
        }
        return;
    }
    int dequeue(){
        if(is_empty()==false){
            return arr[start++];
        }
        else return -9999;
    }
    bool is_full(){
        if(end>999){
            return true;
        }
        return false;
    }
    bool is_empty(){
        if(end<start){
            return true;
        }
        return false;
    }
    void show(){
        if(is_empty()==true){
            cout<<"queue empty ";
            cout<<endl;
            return;
        }
        cout<<"your queue > ";
        for(int i = start ; i<=end ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}q;

int main()
{
    q.show();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    // q.show();
    // for (int i = 0; i < 10000; i++)
    // {
    //     int a = q.enqueue(i);
    //     if(a==INT16_MIN)break;
    // }
    q.show();
    cout<<q.dequeue()<<"\n";
    q.show();
    cout<<q.dequeue()<<"\n";
    q.show();
    cout<<q.dequeue()<<"\n";
    q.show();
    cout<<q.dequeue()<<"\n";
    // system("cls");
    q.show();
    return 0;
}
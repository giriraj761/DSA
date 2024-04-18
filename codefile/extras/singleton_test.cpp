#include<iostream>
#include<stdlib.h>
using namespace std;

class singleton_test
{
private:
    singleton_test *instance= NULL;  //Private Data member
    singleton_test(){}//private construction so that object cannot be created

public:
    singleton_test *getobj()
    {
        if(instance==NULL)
        {
           instance=new singleton_test;
        }
        return instance;
    }
    void printing()
    {
        cout<<"singleton is working";
    }
};

int main()
{
     system("CLS");
     cout<<"main working\n\n";
     singleton_test *obj=obj->getobj();
     obj->printing();

    return 0;
}
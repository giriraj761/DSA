#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char data[100];
    char term[] = "end";
    ifstream infile1;
    infile1.open("file1.txt");
    ifstream infile2;
    infile2.open("file2.txt");
    
    do
    {
        infile1 >> data;
        cout << data << endl;
    } while (strcmp(data, term)!=0);

    do
    {
        infile2 >> data;
        cout << data << endl;
    } while (strcmp(data, term)!=0);
    
    return 0;
}

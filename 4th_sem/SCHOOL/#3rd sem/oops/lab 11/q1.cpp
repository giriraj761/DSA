#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int data1, data2;
    ifstream infile1;
    infile1.open("source1.txt");
    ifstream infile2;
    infile2.open("source2.txt");
    ofstream outfile;
    outfile.open("target.txt");
    int ifsize1, ifsize2;
    infile1 >> ifsize1;
    infile2 >> ifsize2;
    infile1 >> data1;
    infile2 >> data2;
    cout << ifsize1 + ifsize2 << "  " << ifsize1 << " " << ifsize2 << endl;
    int i = 0, j = 0;
    while (true)
    {
        if ((data1 < data2 && i < ifsize1) || !(j < ifsize2))
        {
            outfile << data1 << endl;
            infile1 >> data1;
            i++;
        }
        else
        {
            outfile << data2 << endl;
            infile2 >> data2;
            j++;
        }
        if (i + j == ifsize1 + ifsize2)
            break;
    }
    return 0;
}
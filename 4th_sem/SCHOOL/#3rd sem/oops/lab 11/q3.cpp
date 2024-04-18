#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;
struct student
{
    char name[20];
    char gender[20];
    int height;
    int weight;
};
int main()
{
    char data[100];
    ifstream infile;
    infile.open("studentRec.txt");
    int size;
    infile >> size;
    struct student *records = (struct student *)calloc(size, sizeof(struct student));

    for (int i = 0; i < size; i++)
    {
        infile >> (records + i)->name;
        infile >> (records + i)->gender;
        infile >> (records + i)->height;
        infile >> (records + i)->weight;
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; i < j; j--)
        {
            if (strcmp(records[j].name, records[j - 1].name) < 0)
            {
                swap(records[j], records[j - 1]);
            }
        }
    }

    cout << "name\t\tgender\theight\tweight" << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << (records + i)->name << "\t\t" << (records + i)->gender << "\t" << (records + i)->height << "\t" << (records + i)->weight;
        cout << endl;
    }
    return 0;
}
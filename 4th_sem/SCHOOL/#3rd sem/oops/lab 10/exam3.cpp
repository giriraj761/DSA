// #include <iostream>
// using namespace std;

// int main()
// {

//     FILE *fin;
//     fin = fopen("my-input-file.txt", "in");

//     char ch;
//     int linenumber = 0, charcount = 0;
//     while (ch = getc(fin) && ch!= EOF)
//     {
//         cout<<ch;
//         if (ch == '\n')
//         {
//             ++linenumber;
//             cout<<"char in this line "<<charcount<<" "<<linenumber<<" \n";
//         }

//         if (ch != ' ' && ch != '\n')
//         {
//             ++charcount;
//         }
//     }
//     cout<<" \ntotal char count = "<<charcount;
//     return 0;
// }
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    ifstream in;
    string filename[100];
    filename="my-input-file.txt";

    in.open(filename);


    if (!in)
    {
        cout << "Cannot Open File. Or File Not Find\n";
        return 1;
    }

    char str[1000];

    cout << "\nFile is Given Below\n\n";
    cout << "\n============================================================\n\n";

    int i = 0;
    while (in)
    {
        in.getline(str, 1000);
        if (in)
            cout << "line num: " << i << " " << str << " ->No. of charater: " << strlen(str) << endl;
        i += 1;
    }

    cout << "\n\n============================================================\n";
    in.close();

    return 0;
}
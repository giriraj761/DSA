#include <iostream>
using namespace std;
class Player
{
protected:
    string name;
    int score;

public:
    Player()
    {
        name = "";
        score = 0;
    }

    friend ostream &operator<<(ostream &, Player &);
    friend istream &operator>>(istream &, Player &);
};
istream &operator>>(istream &is, Player &P)
{
    cout << "Enter the name of the player: ";
    is >> P.name;
    cout << "Enter the score: ";
    is >> P.score;
}
ostream &operator<<(ostream &os, Player &P)
{
    os << "Name: " << P.name << endl;
    os << "Score: " << P.score << endl;
}
int main()
{
    Player p;
    cin >> p;
    cout << p;
}
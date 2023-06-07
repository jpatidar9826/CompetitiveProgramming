#include <iostream>
using namespace std;
class Rodent
{
public:
    Rodent()
    {
    }
    string name;
    Rodent(string name_of_rodent)
    {
        name = name_of_rodent;
    }
    void life()
    {
        cout << "The average life of rodent " << name << " is 3 years" << endl
             << endl;
    }
    void weight()
    {
        cout << "The average weight of rodent " << name << " is 3 ounce" << endl
             << endl;
    }
};
class Mouse : public Rodent
{
public:
    void life()
    {
        cout << "The life span of mouse is 1.5-2.5 years" << endl
             << endl;
    }
    void weight()
    {
        cout << "The weight of mouse is between 0.75-1 ounce usually" << endl
             << endl;
    }
};
class Gerbil : public Rodent
{
public:
    void life()
    {
        cout << "The life span of gerbil is 2-3 years" << endl
             << endl;
    }
    void weight()
    {
        cout << "The weight of gerbil is between 2-3 ounces usually" << endl
             << endl;
    }
};
class Hamster : public Rodent
{
public:
    void life()
    {
        cout << "The life span of hamster is 1.5-3 years" << endl
             << endl;
    }
    void weight()
    {
        cout << "The weight of hamster is between 4-5 ounces usually" << endl
             << endl;
    }
};
int main()
{
    Rodent R[3] = {Rodent("Squirrel"), Rodent("Porcupine"), Rodent("Voles")};
    ;
    R[0].life();
    R[0].weight();
    Mouse M;
    Gerbil G;
    Hamster H;
    M.life();
    M.weight();
    G.life();
    G.weight();
    H.life();
    H.weight();
}

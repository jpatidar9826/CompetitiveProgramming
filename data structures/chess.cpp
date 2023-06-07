#include <iostream>
#include <cstring>
using namespace std;
int arrx[8] = {1, 2, 3, 4, 5, 6, 7, 8};
char arry[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

bool check(int x, char y)
{
    for (int i = 0; i < 9; i++)
    {
        if (x == arrx[i])
        {
            for (int j = 0; j < 9; j++)
            {
                while (y == arry[j])
                {
                    return true;
                }
            }
        }
        else
         return false;
    }
}

int main()
{

    int x;
    char y;
    cout << "Enter the position of king" << endl;
    cin >> x;
    cin >> y;
    if (check(x, y))
    {
        cout << "valid move";
    }
    else
    {
        cout << "invalid move";
    }
    

    return 0;
}

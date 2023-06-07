#include<iostream>
using namespace std;

int main()
{
    string k;
    cin>>k;
    

    for (int i = 0; i < k.length(); i++)
    {
        char z = k[i];
        z = tolower(z);
        if (z != 'a'&& z != 'e'&& z != 'i'&& z != 'o'&& z != 'u'&& z != 'y' )
        {
            cout<<"."<<z;
        }
        
    }
    

    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("oops.txt");
    cout << "Enter the product name\n"
         << endl;
    char name[100];
    cin >> name;
    fout << name << "\n";
    cout << "Enter the price of the item\n"
         << endl;
    int price;
    cin >> price;
    fout << price << "\n";
    fout.close();
    ifstream fin;
    fin.open("oops.txt");
    fin >> name;
    fin >> price;
    cout << "NAME OF PRODUCT-" << name << endl;
    cout << "PRICE-" << price << endl;
    cout << "\n";
    fin.close();
    return 0;
}
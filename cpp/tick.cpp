#include <iostream>

using namespace std;
char custName[50];
struct movielist
{
	int hallno;
	char moviename[50] = {0};

} H1, H2, H3, H4;

class ticket
{
private:
	/* data */
public:
	int a;
	int b;
	int c;
	int row;
	int coloumn;
	int Seats[9][19];

	string entpass;
	void ShowAdder();
	void ShowList();
	void ShowBook();
	void SeatFiller(int x, int y);
	bool SeatChecker(int x, int y);
};

void ticket ::ShowAdder()
{

	cout << "***WELCOME ADMIN***" << endl;

	cout << "Please Enter Password" << endl;
	cin >> entpass;

	if (entpass == "passwordis")
	{

		cout << "Enter the movie name for Hall 1" << endl;
		cin.getline(H1.moviename, 50);
		H1.hallno = 1;
		cin.getline(H1.moviename, 50);

		cout << "Enter the movie name for Hall 2" << endl;
		H2.hallno = 2;
		cin.getline(H2.moviename, 50);

		cout << "Enter the movie name for Hall 3" << endl;
		H3.hallno = 3;
		cin.getline(H3.moviename, 50);

		cout << "Enter the movie name for Hall 4" << endl;
		H4.hallno = 4;
		cin.getline(H4.moviename, 50);
	}
	else
	{
		cout << "Incorrect Passsword" << endl;
	}
}
void ticket ::ShowList()
{
	cout << "Hall No.   : " << H1.hallno << endl
		 << "Movie name : " << H1.moviename << endl
		 << "Show Time  : 1200 - 1500 |1500 - 1800 |1800 - 2100 |2100 - 0000" << endl;
	cout << "Hall No.   : " << H2.hallno << endl
		 << "Movie name : " << H2.moviename << endl
		 << "Show Time  : 1200 - 1500 |1500 - 1800 |1800 - 2100 |2100 - 0000" << endl;
	cout << "Hall No.   : " << H3.hallno << endl
		 << "Movie name : " << H3.moviename << endl
		 << "Show Time  : 1200 - 1500 |1500 - 1800 |1800 - 2100 |2100 - 0000" << endl;
	cout << "Hall No.   : " << H4.hallno << endl
		 << "Movie name : " << H4.moviename << endl
		 << "Show Time  : 1200 - 1500 |1500 - 1800 |1800 - 2100 |2100 - 0000" << endl;
}
void ticket ::ShowBook()
{
	cout << "*****WELCOME TO SHOW BOOKING*****" << endl
		 << "Choose Movie" << endl
		 << "Press " << endl
		 << "1." << H1.moviename << endl
		 << "2." << H2.moviename << endl
		 << "3." << H3.moviename << endl
		 << "4." << H4.moviename << endl;
	cin >> a;
	cout << "Choose Show Time" << endl
		 << "Press " << endl
		 << "1.**1200 - 1500**" << endl
		 << "2.**1500 - 1800**" << endl
		 << "3.**1800 - 2100**" << endl
		 << "4.**2100 - 0000**" << endl;
	cin >> b;
	cout << "Please Enter Your Name" << endl;
	cin.getline(custName, 50);
	cin.getline(custName, 50);
	cout << "No. of Seats" << endl;
	cin >> c;
	cout << "Choose Your Seat Number" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			Seats[i][j] = {0};
		}
	}
	for (int i = 0; i < c; i++)
	{
	Seater:
		cout << "Enter row no." << endl;
		cin >> row;
		cout << "Enter coloumn" << endl;
		cin >> coloumn;
		if (SeatChecker(row, coloumn))
		{
			cout << "Seat is already filled,Re-enter seat" << endl;
			goto Seater;
		}
		else
		{
			SeatFiller(row, coloumn);
		}
	}
	cout << endl
		 << "*****Printing Bill*****" << endl
		 << "Name         : " << custName << endl;
	switch (a)
	{
	case 1:
		cout << "Hall No.     :" << H1.hallno << endl;
		cout << "Movie Name   :" << H1.moviename << endl;
		break;
	case 2:
		cout << "Hall No.     :" << H2.hallno << endl;
		cout << "Movie Name   :" << H2.moviename << endl;
		break;
	case 3:
		cout << "Hall No.     :" << H3.hallno << endl;
		cout << "Movie Name   :" << H3.moviename << endl;
		break;
	case 4:
		cout << "Hall No.     :" << H4.hallno << endl;
		cout << "Movie Name   :" << H4.moviename << endl;
		break;
	default:
		break;
	}
	switch (b)
	{
	case 1:
		cout << "Show Time    :**1200 - 1500**" << endl;
		break;
	case 2:
		cout << "Show Time    :**1500 - 1800**" << endl;
		break;
	case 3:
		cout << "Show Time    :**1800 - 2100**" << endl;
		break;
	case 4:
		cout << "Show Time    :**2100 - 0000**" << endl;
		break;

	default:
		break;
	}

	cout << "No. of Seats : " << c << endl
		 << "SeatsID      : " << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{

			if (Seats[i][j] == 1)
			{
				cout << "      Row : " << i << " |Coloumn : " << j << endl;
			}
		}
	}
	cout << "Total Amount :" << (c * 100) << "/- Rs" << endl;
}
void ticket ::SeatFiller(int x, int y)
{
	Seats[x][y] = {1};
}
bool ticket ::SeatChecker(int x, int y)
{
	if (Seats[x][y] == 1)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	ticket first;

	int k;

	cout << "**********MOVIE TICKET RESERVATION SYSTEM**********" << endl;
TOPMENU:
	cout << "Press -" << endl
		 << "      1.Add Show" << endl
		 << "      2.Print the Show List" << endl
		 << "      3.Book Ticket" << endl
		 << "      4.Exit" << endl;
	cin >> k;
	switch (k)
	{
	case 1:
		first.ShowAdder();

		break;
	case 2:
		first.ShowList();
		break;
	case 3:
		first.ShowBook();
		break;
	default:
		return 0;
		break;
	}
	goto TOPMENU;
}

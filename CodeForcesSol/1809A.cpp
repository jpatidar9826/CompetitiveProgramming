#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{

		int flag = 0;
		int a[10] = {0};

		for (int j = 0; j < 4; j++)
		{
			char temp;
			cin >> temp;
			int k = (int)temp - 48;
			a[k]++;
		}
		for (int j = 0; j < 10; j++)
		{
			if (a[j] == 4)
			{
				cout << -1 << endl;
				flag = 1;
				break;
			}
			else if (a[j] == 3)
			{
				cout << 6 << endl;
				flag = 1;
				break;
			}
		}

		if (flag == 0)
		{
			cout << 4 << endl;
		}
	}
	return 0;
}
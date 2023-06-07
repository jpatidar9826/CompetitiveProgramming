#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, sum = 0, k = 0,start=0;
    cin >> n >> x;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        sum = sum + arr[i][1] - arr[i][0]+1;
    }
    

    for (int i = 0; i < n; i++)
    {
        arr[i][0] = arr[i][0]-1-start;
        while (x <= arr[i][0])
        {
            arr[i][0] = arr[i][0] - x;
        }
        k = k + arr[i][0];
        start = arr[i][1];
    }
    cout << sum +k;

    return 0;
}
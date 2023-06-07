#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int countp = 0;
        int countn = 0;

        int a;
        cin >> a;
        vector<int> b;
        int b1;
        cin >> b1;
        b.push_back(b1);

        for (int j = 1; j < a; j++)
        {
            int temp;
            cin >> temp;
            temp = abs(b[j - 1]) * temp * 2;
            b.push_back(temp);
        }
        int prefixSum = 0;
        unordered_map<int, int> prefixSumCount;
        
        for (int j = 0; j < a; j++)
        {
            prefixSum += b[i];

            if (prefixSum > 0)
            {
                countp++;
            }else if (prefixSum < 0)
            {
                countn++;
            }
            

            if (prefixSumCount.find(prefixSum) != prefixSumCount.end())
            {
                count += prefixSumCount[prefixSum];
            }

            prefixSumCount[prefixSum]++;
        }
        cout << abs(countn - countp) << endl;
    }
    return 0;
}

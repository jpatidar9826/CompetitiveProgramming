#include <iostream>
using namespace std;

int beauty(int n ,int m,float t1[],float b1[]){
    int sum = 0;
    int k = m;
    for (int i = 0; i < n; i++)
    {
        while (m>0 && t1[i]>0)
        {
            t1[i] = t1[i] - 1;
            m = m - 1;
            sum = sum +b1[i];
        }
        
        
    }
    
    return sum;
}

int main()
{

    int m;
    int n;

    
    cin >> n;
    cin >> m;
    float t[n];
    float b[n];
    for (int i = 0; i < n; i++)
    {
        
        cin >> t[i];
        cin >> b[i];
    }
    float t1[n];
    float b1[n];
    for (int i = 0; i < n; i++)
    {
        b1[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[j] > b1[i])
            {
                b1[i] = b[j];
                t1[i] = t[j];
            }
        }
        for (int k = 0; k < n; k++)
        {
            if (b1[i] == b[k])
            {
                b[k] = 0;
            }
        }
    }
   
    cout<<beauty(n,m,t1,b1)<<endl;

    return 0;
}
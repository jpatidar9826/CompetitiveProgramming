#include <bits/stdc++.h>
using namespace std;



int main()
{
    int N = 10;
    int L = 4;
    vector<int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    
    int multi[L];
        int sub[L];
        for(int i = 0; i<L;i++)
        {
            multi[i] = 2;
            sub[i]=A[i];
        }
        int count = 0;
        for(int i = 1 ;;i++)
        {
            count = 0;
            for(int j=0 ; j< L ;j++)
            {
                if((i/sub[j])>0)
                {
                 sub[j] = sub[j]+(multi[j]*A[j]);
                 cout<<sub[j]<<" ";
                 multi[j]++;
                 count++;
                }
            }
            cout<<count<<" "<<i<<endl;
            N = N-count;
            if(N<=0)
            {
                
                break;
            }
        }

    

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin >> n;
    string a[29];
    a[0] = "ABSINTH", a[1] = "BEER", a[2] = "BRANDY", a[3] = "CHAMPAGNE", a[4] = "GIN",
    a[5] = "RUM", a[6] = "SAKE", a[7] = "TEQUILA", a[8] = "VODKA", a[9] = "WHISKEY", a[10] = "WINE";
    a[11] = "0" ,a[12] = "1",a[13] = "2", a[14] = "3" ,a[15] ="4" ,a[16] ="5" ,a[17] ="6" ,a[18] ="7" ,
    a[19] = "8" ,a[20] = "9",a[21] = "10", a[22] = "11" ,a[23] ="12" ,a[24] ="13" ,a[25] ="14" ,a[26] ="15" ,
    a[27] = "16", a[28] = "17" ;
    
    string k[n];
    for (int i = 0; i < n; i++)
    {
        cin>>k[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< 29; j++)
        {
            if (a[j]==k[i])
            {
                c++;
            }
            
        }
        
    }
    
    cout<<c++;
    

    return 0;
}
#include<iostream>
using namespace std;

int main() {

    long int n,l,r;
    cin>>n>>l>>r;
    long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        long int temp;
        cin>>temp;
        temp = temp - (l-1);
        temp = temp/(r-l+1);
        sum = sum + temp;
    }

    if (sum%2 == 1)
    {
        cout<<"First"<<endl;
    }else{
        cout<<"Second"<<endl;
    }
    
    

    return 0;
}
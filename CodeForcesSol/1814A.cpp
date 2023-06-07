#include<bits/stdc++.h>
using namespace std;

long int gcd(long int a,long int b) {
    while (b != 0) {
        long int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
 
int main(){
 	 
  long int a;
  long int b;
  cin>>a>>b;
  int counter = 0;
  
  while( a>= 1 && b >= 1 )
  {
    long int g = __gcd(a,b);
    a = a - g;
    b = b - g;
    counter++;
   }
  cout<<counter;
  return 0;
}
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int a;
	    cin>>a;
	    int ans;
	    
	    if( a <= 2 ){
	        cout<<0<<endl;
	    }else{
	        
	        if(a%2 == 1){
	            
	            int n = a/2;
	            
	            ans = 2 + (n-1)*3;
	            
	        }else{
	            
	            int n = a/2 -1;
	            ans = 3 + (n-1) * 3;
	            
	        }
	        
	        cout<<ans<<endl;
	        
	    }
	    
	}
	return 0;
}

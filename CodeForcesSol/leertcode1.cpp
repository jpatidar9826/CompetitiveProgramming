#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "A man, a plan, a canal : Panama";

    string p;
        for(int i = 0;i<s.size();i++){
            char t = s[i];
            if(t > 64 && t < 91){
                p = p + t;
            }else if(t > 96 && t < 123){
                t = t - 32;
                p = p + t;
            }
        }
        int l = p.size();
        for(int i=0; i< l/2 + 1 ;i++){

            if(p[i] != p[l - i - 1]){
                cout<<"no"<<endl;
                return 0;
            }
        }

      cout<<"ture"<<endl;
       



   

    return 0;
}
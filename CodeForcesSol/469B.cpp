#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2)
{

    if(p1.second==p2.second) //if frequency is equal

    {

        return p1.first<p2.first; //return the smaller value

    }

    return p1.second>p2.second; //return the element with greater frequency
}

vector<int> freqSort(vector<int> listEle)
{
    int n=listEle.size();

    map<int,int>m;

    for(int i=0;i<n;i++)

    {

        m[listEle[i]]+=1;

    }

    vector<pair<int,int>>a;

    for(auto it=m.begin();it!=m.end();it++)

    {

        a.push_back(make_pair(it->first,it->second)); //making pair of element and it's frequency

    }

    sort(a.begin(),a.end(),compare);

    vector<int>answer;

    for(auto x:a)

    {

        while(x.second--)

        {

        answer.push_back(x.first);

        }

    }

    return answer;
}

int main()
{
    int t;
    cin>>t;
    vector<int> z;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin>>x;
        z.push_back(x);
    }
    vector<int> k;
    k = freqSort(z);
    for (int i = 0; i < t; i++)
    {
        cout<<k[i]<<" ";
    }
    
    

    return 0;
}
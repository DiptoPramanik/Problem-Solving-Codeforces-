#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
       int n; cin>>n;
       int cnt=1;
        vector<int>v;
        while(n>0)
        {
            int last_digit = n%10;
            last_digit*=cnt;
            if(last_digit>0)
            {
                v.push_back(last_digit);
            }
            n/=10;
            cnt*=10;
        }
        cout<<v.size()<<'\n';
        for(auto u:v) cout<<u<<" ";
        cout<<'\n';
        v.clear();
    }
    return 0;
}


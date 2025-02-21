#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        map<char,int>mp;
        int n; cin>>n;
        string s; cin>>s;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int cnt=0;
        ///for(auto u:mp) cout<<u.first<<' '<<u.second<<'\n';
        for(auto u:mp)
        {
            if(u.second==1) cnt+=2;
            else cnt+=(u.second+1);
        }
        cout<<cnt<<'\n';
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int cnt=0;
        string s; cin>>s;
        int n = s.size();
        for(int i=1;i<n;i++)
        {
           if(s[i]==s[i-1])
           {
               cnt++;
           }
        }
        if(cnt>0) cout<<1<<endl;
        else cout<<s.size()<<'\n';
    }
    return 0;
}


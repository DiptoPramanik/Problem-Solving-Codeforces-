#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int ans =0;
        for(int i=1;i<n;i++)
        {
            if(s[i-1]!=s[i]) ans++;
        }
        if(s[0]=='1') ans++;///WTF, I can't match this logic with the problem statement
        cout<<ans<<'\n';
    }
    return 0;
}

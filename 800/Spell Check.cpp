#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s = "Timru";
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s1; cin>>s1;
        sort(s1.begin(),s1.end());
        if(s1==s) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}


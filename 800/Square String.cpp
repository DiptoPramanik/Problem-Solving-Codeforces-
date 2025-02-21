#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int n = s.size();
        if(n%2!=0)
        {
            cout<<"NO\n";

        }
        else
        {
            int x = n/2;
            string s1,s2;
            for(int i=0;i<x;i++)
            {
                s1+=s[i];
            }
            for(int i=x;i<n;i++)
            {
                s2+=s[i];
            }
            if(s1==s2) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}


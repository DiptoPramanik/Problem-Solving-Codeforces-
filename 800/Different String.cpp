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
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                flag = false;
                swap(s[i],s[i-1]);
                cout<<"YES\n";
                cout<<s<<'\n';
                break;
            }
        }
        if(flag) cout<<"NO\n";
    }
    return 0;
}

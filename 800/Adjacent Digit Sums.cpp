#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int x,y; cin>>x>>y;
        int d = x+1-y;
        if(d>=0 && d%9==0)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}


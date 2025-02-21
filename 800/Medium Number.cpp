#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;
        int ar[3]={a,b,c};
        sort(ar,ar+3);
        cout<<ar[1]<<'\n';
    }
    return 0;
}


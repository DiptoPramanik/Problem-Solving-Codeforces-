#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    map<int,int>m;
    int f=1;
    while(n--)
    {
       int x; cin>>x;
       m[x]=f;
       f++;
    }
    ///cout<<i<<'\n';
    for(int i=1;i<f;i++) cout<<m[i]<<" ";
    cout<<'\n';
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    map<string,bool>vis;
    int group=0;
    string preS;
    while(n--)
    {
        string s; cin>>s;
        if(vis[s]==0 || preS!=s)
        {
           group++;
        }
        vis[s]=1;
        preS=s;
    }
    cout<<group<<'\n';
    return 0;
}


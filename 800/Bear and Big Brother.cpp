#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b; cin>>a>>b;
    int y=0;
    while(true)
    {
        if(a>b) break;
        a*=3;
        b*=2;
        y++;
    }
    cout<<y<<'\n';
    return 0;
}

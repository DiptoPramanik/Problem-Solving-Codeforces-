#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    int m=0,c=0;
    while(n--)
    {
        int a,b; cin>>a>>b;
        if(a>b) m++;
        else if(a<b) c++;
    }
    if(m>c) cout<<"Mishka\n";
    else if(m<c) cout<<"Chris\n";
    else cout<<"Friendship is magic!^^\n";
    return 0;
}


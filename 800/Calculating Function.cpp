#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long int n; cin>>n;
    if(n%2==0) cout<<(n/2)<<'\n';
    else cout<<-(n-(n/2))<<'\n';
    return 0;
}


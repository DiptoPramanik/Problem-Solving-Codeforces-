#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    int p=0,capacity=0;
    while(n--)
    {
        int a,b; cin>>a>>b;
        if(p>=a) p-=a;
        p+=b;
        ///cout<<exit<<" "<<enter<<endl;
        capacity = max(capacity,p);
        ///cout<<capacity<<endl;
    }
    cout<<capacity<<'\n';
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    set<int>s;
    int p; cin>>p;
    for(int i=0;i<p;i++)
    {
        int x; cin>>x;
        s.insert(x);
    }

    int q; cin>>q;
    for(int i=0;i<q;i++)
    {
        int x; cin>>x;
        s.insert(x);
    }
    if(s.size()==n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";
    return 0;
}

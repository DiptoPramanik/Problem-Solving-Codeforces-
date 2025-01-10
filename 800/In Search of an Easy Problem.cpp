#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    bool cnt = 0;
    while(n--)
    {
        int a; cin>>a;
        if(a==1)
        {
            cnt = 1;
            break;
        }
    }
    if(cnt==1) cout<<"HARD\n";
    else cout<<"EASY\n";
    return 0;
}


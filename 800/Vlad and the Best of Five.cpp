#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int cntA=0,cntB=0;
        for(int i=0;i<5;i++)
        {
            if(s[i]=='A') cntA++;
            else cntB++;
        }
        if(cntA>cntB) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
    return 0;
}


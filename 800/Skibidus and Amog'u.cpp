#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int n = s.size();
        s[n-2]='i';
        string tmp;
        for(int i=0;i<n-1;i++)
        {
            tmp+=s[i];
        }
        cout<<tmp<<endl;
    }
    return 0;
}


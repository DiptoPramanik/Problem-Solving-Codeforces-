#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    string s1="codeforces";
    while(n--)
    {
        string s; cin>>s;
        int n = s.size();
        int cnt=0;
        for(int i=0,j=0;i<n;i++,j++)
        {
            if(s[i]!=s1[j]) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,bool>m;
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    string s; cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<n;i++)
    {
        m[s[i]] = 1;
    }
    int flag = 0;
    for(char i='a';i<='z';i++)
    {
        if(m[i]==0)
        {
            cout<<"NO\n";
            flag = 1;
            break;
        }
    }
    if(flag==0) cout<<"YES\n";
    return 0;
}


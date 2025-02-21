#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.size();
    for(int i=0,j=0;i<n;i++,j++)
    {
        if((s1[i]=='0' &&s2[j]=='1') || (s1[i]=='1' &&s2[j]=='0'))
        {
            cout<<"1";
        }
        else cout<<"0";
    }
    cout<<'\n';
    return 0;
}


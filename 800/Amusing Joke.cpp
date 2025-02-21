#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s1,s2,o;
    cin>>s1>>s2>>o;
    string s = s1+s2;
////    cout<<s<<endl;
////    cout<<s.size()<<endl;
////    cout<<o.size()<<endl;
     sort(s.begin(),s.end());
     sort(o.begin(),o.end());
//     cout<<s<<endl;
//     cout<<o<<endl;
    if(s==o) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}


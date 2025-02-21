#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    getline(cin,s);
    ///cout<<s<<endl;
    string tmp;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            tmp+=s[i];
        }
    }
    ///cout<<tmp<<endl;
    set<char>st;
    for(int i=0;i<tmp.size();i++)
    {
        st.insert(tmp[i]);
    }
    cout<<st.size()<<endl;
    return 0;
}


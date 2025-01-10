#include<bits/stdc++.h>
using namespace std;
bool is_beautiful(int y)
{
    set<int>s;
    while(y>0)
    {
        int last_digit = y%10;
        s.insert(last_digit);
        y/=10;
    }
    return(s.size()==4);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int year;
    cin>>year;
    for(int i=year+1;;i++)
    {
        if(is_beautiful(i))
        {
            cout<<i<<'\n';
            break;
        }
    }
    return 0;
}

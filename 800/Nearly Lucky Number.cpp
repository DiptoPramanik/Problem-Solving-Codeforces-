#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n; cin>>n;
    ll cnt=0;
    while(n!=0)
    {
    int last_digit = n%10;
       if((last_digit==7) || (last_digit==4))
          {
              cnt++;
          }
          n/=10;
    }
    if((cnt==7)|| (cnt==4)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}


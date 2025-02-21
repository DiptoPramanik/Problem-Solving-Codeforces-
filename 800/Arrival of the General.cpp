#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
//    int l = max_element(v.begin(),v.end()) - v.begin();
//    ///cout<<l<<endl;
//    int r  = min_element(v.begin(),v.end()) - v.begin();
//    ///cout<<l<<" "<<r<<endl;
//    if(l<r) cout<<(l+(n-1)-r)<<'\n';
//    else cout<<((l+(n-1)-r)-2)<<'\n';
      int mx = INT_MIN,mn = INT_MAX;
      int mxidx,mnidx;
      for(int i=0;i<n;i++)
      {
          if(mx<v[i])
          {
              mx = v[i];
              mxidx = i;
          }
          if(mn>=v[i])
          {
              mn = v[i];
              mnidx = i;
          }
      }
      ///cout<<mxidx<<" "<<mnidx<<endl;
      if(mxidx<mnidx) cout<<(mxidx+(n-1)-mnidx)<<'\n';
      else cout<<((mxidx+(n-1)-mnidx)-1)<<'\n';
    return 0;
}


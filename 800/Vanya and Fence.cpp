#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h; cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int mnWidth=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=h) mnWidth++;
        else mnWidth+=2;
    }
    cout<<mnWidth<<'\n';
    return 0;
}

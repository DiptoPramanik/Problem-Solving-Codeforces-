#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a[6][6];
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            cin>>a[i][j];
        }
    }
//    for(int i=1;i<6;i++)
//    {
//        for(int j=1;j<6;j++)
//        {
//           cout<<a[i][j]<<" ";
//        }
//        cout<<'\n';
//    }
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            if(a[i][j]==1)
            {
                cout<<(abs(i-3)+abs(j-3))<<'\n';
                break;
            }
        }
    }
    return 0;
}


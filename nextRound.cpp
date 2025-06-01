#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=0 && v[i]>=v[k-1]) cnt++;
        else break;
    }
    cout<<cnt;
    return 0;
}
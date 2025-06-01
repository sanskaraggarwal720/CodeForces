#include<bits/stdc++.h>
using namespace std;
int sumDigit(int num)
{
    int ans=0;
    int dig=num%10;
    ans+=dig;
    num=num/10;
    ans+=num;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        ans[i]=sumDigit(v[i]);
    }
    for(auto it:ans)
    {
        cout<<it<<endl;
    }
    return 0;
}
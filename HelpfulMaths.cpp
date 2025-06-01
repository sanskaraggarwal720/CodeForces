#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char>v;
    int n=s.length();
    if(n==1)
    {
        cout<<s;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]!='+') v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    int n1=v.size();
    string res;
    for(int i=0;i<n1;i++)
    {
        res.push_back(v[i]);
        res.push_back('+');
    }
    res.pop_back();
    cout<<res;
    return 0;
}
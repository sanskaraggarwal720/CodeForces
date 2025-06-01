#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<char>v;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        v.push_back(s[i]);
    }
    v[0]=toupper(v[0]);
    for(auto i:v)
    {
        cout<<i;
    }
    return 0;
}
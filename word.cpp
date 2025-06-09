#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int lower=0;
    int upper=0;
    for(char c:s)
    {
        if(islower(c)) lower++;
        else upper++;
    }
    if(lower>=upper)
    {
        for(int i=0;i<n;i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}
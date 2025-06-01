#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    char previous=s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i]==previous)
        {
            ans++;
        }
        else{
            previous=s[i];
        }
    }
    cout<<ans;    
    return 0;
}
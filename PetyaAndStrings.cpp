#include<bits/stdc++.h>
using namespace std;
string toLowerCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string cmp1=toLowerCase(s1),cmp2=toLowerCase(s2);
    if(cmp1==cmp2) cout<<0;
    else if(cmp1<cmp2) cout<<-1;
    else cout<<1;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int year=0;
    while(true)
    {
        if(a>b)
        {
            cout<<year;
            return 0;
        }
        else
        {
            year++;
            a=a*3;
            b=b*2;
        }
    }
    return 0;
}
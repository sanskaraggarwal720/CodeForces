#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>mat(5,vector<int>(5));
    int row=0,col=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }
    int ans=abs(3-(row+1))+abs(3-(col+1));
    cout<<ans;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int find_beauty(int x, int y)
{
    return (x%y)+(y%x);
}
int find_max(vector<int>arr)
{
    int max=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        int prevmax1=INT_MIN;
        int prevmax2=INT_MIN;
        int curr_max=INT_MIN;
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        vector<int>ans(n);
        ans[0]=0;
        int counter=0;
        for(k=1;k<n;k++)
        {
            for(int p=0;p<counter;p++)
            {
                
            }
        }
    }
    return 0;
}
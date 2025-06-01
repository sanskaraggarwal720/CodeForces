#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(int i=(a);i<(b);++i)
int seg[10]={6,2,5,5,4,5,6,3,7,6};
int cost(const string &s){int c=0; for(char x:s) c+=seg[x-'0']; return c;}
int countPrimes(int L,int R){
    vector<bool> p(R+1,true);
    p[0]=p[1]=false;
    rep(i,2,(int)sqrt(R)+1) if(p[i]) for(int j=i*i;j<=R;j+=i) p[j]=false;
    int cnt=0; rep(i,L,R+1) if(p[i]) ++cnt;
    return cnt;
}
int main(){
    int N,K; cin>>N>>K;
    string s; cin>>s;
    int init=cost(s), best=init;
    queue<pair<string,int>> q;
    unordered_set<string> vis;
    q.push({s,0});
    vis.insert(s);
    while(!q.empty()){
        auto [u,d]=q.front(); q.pop();
        if(d==K) continue;
        int a=u.front()-'0', b=u.back()-'0';
        string m=u.substr(1,u.size()-2)+to_string(a+b);
        if(!vis.count(m)){
            vis.insert(m);
            best=min(best,cost(m));
            q.push({m,d+1});
        }
        string r=u.substr(1)+u.front();
        if(!vis.count(r)){
            vis.insert(r);
            best=min(best,cost(r));
            q.push({r,d+1});
        }
    }
    cout<<best<<"\n";
    cout<<countPrimes(best, init*init*init)<<"\n";
    return 0;
}
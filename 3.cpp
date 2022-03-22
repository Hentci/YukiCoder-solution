#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
#define sz(x) ((int)x.size())
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int n;
    cin >> n;
    ll d[n + 5];
    memset(d, 0x3f, sizeof d);
    queue <int> q;
    q.push(1);
    d[1] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        int cnt = __builtin_popcount(u);
        if(u + cnt <= n && d[u + cnt] > INT32_MAX){
            d[u + cnt] = d[u] + 1;
            q.push(u + cnt);
        }
        if(u - cnt > 0 && d[u - cnt] > INT32_MAX){
            d[u - cnt] = d[u] + 1;
            q.push(u - cnt);
        }
    }

    d[n]++;

    cout << (d[n] > INT32_MAX ? -1 : d[n]) << "\n";

    return 0;
}
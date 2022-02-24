#include <atcoder/dsu.hpp>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
#define sz(x) ((int)x.size())
#define lazycalc S, op, e, F, mapping, composition, id
#define segcalc S, op, e
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
const int mod = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int n;
    cin >> n;
    vector <ar<ll, 3>> G(n - 1);
    for(auto &[a, b, c]: G){
        cin >> a >> b >> c;
        --a, --b;
    }
    
    ll ans = 0;
    for(int i = 0;i < 32;i++){
        dsu d(n);
        for(auto [a, b, c]: G){
            if(c >> i & 1)
                d.merge(a, b);
        }
        for(auto ele: d.groups()){
            ll SZ = ele.size() % mod;
            SZ = SZ * (SZ - 1) / 2 % mod;
            ans = (ans + SZ * (1 << i)) % mod;
        }
    }

    cout << ans << "\n";

    return 0;
}
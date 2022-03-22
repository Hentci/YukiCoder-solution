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
    // 1 2 3
    // 2 4 5
    string s;
    cin >> s;
    ll ans = 1;
    for(auto ele: s){
        if(ele == 'L') ans <<= 1;
        else ans = (ans << 1) + 1;
    }

    cout << ans << "\n";

    return 0;
}
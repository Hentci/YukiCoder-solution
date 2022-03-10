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
    int l, n;
    cin >> l >> n;

    vector <ll> w(n);
    for(auto &ele: w) cin >> ele;

    sort(all(w));
    ll sum = 0;
    int ans = 0;
    for(auto ele: w)
        if(sum + ele <= l) sum += ele, ans++;

    cout << ans << "\n";

    return 0;
}
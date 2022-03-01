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
    int t;
    cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        // if y <= x ok
        // 2 1 1
        // 3 2 1
        // 4 3 1
        // 5 3 2
        cout << (x <= 4 && y > x ? "No" : "Yes") << "\n";
    }


    return 0;
}
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
    ll n;
    cin >> n;
    int i = 1, ans = 0;
    while(true){
        string s = to_string(i);
        if(stoll(s + s + s) > n) break;
        ans++;
        i++;
    }

    cout << ans << "\n";

    return 0;
}
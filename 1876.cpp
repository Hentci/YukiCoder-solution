#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
#define sz(x) ((int)x.size())
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
const int mxN = 2000 * 2000 + 5;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int n;
    cin >> n;
    bitset <mxN> dp;
    dp[0] = 1;
    for(int i = 0, a;i < n;i++){
        cin >> a;
        dp ^= (dp << a);
    }

    int ans = 0;
    for(int i = 1;i <= mxN;i++)
        if(dp[i]) ans ^= i;

    cout << ans << "\n";

    return 0;
}
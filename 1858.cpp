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
    int n, m;
    cin >> n >> m;
    vector <ar<ll, 2>> arr(n);
    for(int i = 0, v, w;i < n;i++){
        cin >> v >> w;
        arr[i][0] = v;
        arr[i][1] = w;        
    }

    sort(all(arr), greater<ar<ll, 2>>());

    ll dp[m + 5] = {}, ans = 0;
    for(int i = 0;i < n;i++){
        for(int j = m;j >= arr[i][1];j--){
            chmax(dp[j], dp[j - arr[i][1]] + arr[i][0]);
            chmax(ans, (dp[j - arr[i][1]] + arr[i][0]) * arr[i][0]);
        }
    }

    cout << ans << "\n";

    return 0;
}
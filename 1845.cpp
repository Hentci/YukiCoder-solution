    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define all(x) x.begin(),x.end()
    #define ar array
    #define sz(x) ((int)x.size())
    template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
    template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
    const int mod = 1e9 + 7, mxn = 2e5 + 5;
    int main(){
        ios_base::sync_with_stdio(false),cin.tie(0);
        int n;
        cin >> n;
        vector <int> arr(n);
        for(auto &ele: arr) cin >> ele;
        string s;
        cin >> s;
        
        ll ans = 1;
        map <char, int> dp;
        for(int i = 0;i < n;i++){
            ll tmp = ans;
            ans = ((arr[i] + 1) * ans) - arr[i] * dp[s[i]];
            ans %= mod;
            dp[s[i]] = arr[i] * tmp - (arr[i] - 1) * dp[s[i]];
            dp[s[i]] %= mod;
        }
        // 2 2
        // ab -> aabb  8

        --ans;

        cout << ans << "\n";

        return 0;
    }

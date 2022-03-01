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
        ll n, k;
        cin >> n >> k;
        vector <ll> arr(n), pre(n + 1);
        for(auto &ele: arr) cin >> ele;

        for(int i = 1;i <= n;i++)
            pre[i] = pre[i - 1] ^ arr[i - 1];

        sort(all(pre));
        for(int i = 0;i < n;i++){
            int j = lower_bound(all(pre), pre[i] ^ k) - pre.begin();
            if(j <= n && (pre[i] ^ pre[j]) == k){
                cout << "Yes" << "\n";
                exit(0);
            }
        }

        cout << "No" << "\n";

        return 0;
    }
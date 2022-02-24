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
        int n, a, b, c;
        cin >> n;
        cin >> a >> b >> c;
        cout << ((a < b && a < c) || (a > b && a > c) ? "Yes" : "No") << "\n";

        return 0;
    }
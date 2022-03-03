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
    ll n, x, ans; // (n - 1, n - 1 / 2) 
    cin >> n; // (i - 2,j - 1), (i - 2, j + 1)
    x = (n - 1) / 2;
    cout << (x + 2) * (x + 1) / 2 << "\n";
    
    return 0;
}
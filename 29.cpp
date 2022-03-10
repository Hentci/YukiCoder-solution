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
    map <int, int> mp;
    int n;
    cin >> n;
    for(int i = 0, a;i < n * 3;i++){
        cin >> a;
        mp[a]++;
    }

    int ans = 0;
    for(auto &ele: mp){
        if(ele.second / 2 != 0){
            ans += ele.second / 2;
            ele.second %= 2;
        }
    }
    int r = 0;
    for(auto ele: mp)
        r += ele.second;
    
    cout << ans + r / 4 << "\n";

    return 0;
}
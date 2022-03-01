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
    char a, b;
    cin >> a >> b;
    map <char, int> mp;
    mp['N'] = 0;
    mp['E'] = 1;
    mp['S'] = 2;
    mp['W'] = 3;

    cout << (mp[b] < mp[a] ? 3 - mp[a] + mp[b] + 1 : mp[b] - mp[a]) << "\n";

    return 0;
}
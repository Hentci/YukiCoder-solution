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
    int a, b, leftA, leftB;
    cin >> a >> b;
    for(int i = 0;i < 30;i++) if(a & (1 << i)) leftA = i;
    for(int i = 0;i < 30;i++) if(b & (1 << i)) leftB = i;

    int ans = 0;
    if(leftA != leftB) ans = min(a, b);
    else{
        for(int i = 0;i < leftA;i++)
            ans += (1 << i);
    }

    cout << ans << "\n";


    return 0;
}
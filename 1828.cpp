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
    int n;
    cin >> n;
    ll cntA = 0, cntB = 0, cntC = 0, x;
    for(int i = 0;i < n;i++){
        cin >> x;
        if(x % 3) cntA++;
    }
    for(int i = 0;i < n;i++){
        cin >> x;
        if(x % 3) cntB++;
    }
    for(int i = 0;i < n;i++){
        cin >> x;
        if(x % 3) cntC++;
    }
    
    cout << cntA * cntB *cntC << "\n";

    return 0;
}
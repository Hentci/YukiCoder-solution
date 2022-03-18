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
    int m, n;
    char c;
    cin >> m >> n >> c;
    string a, b; // a "W..." b "B..."
    for(int i = 0;i < m;i++){
        a += i & 1 ? 'B' : 'W';
        b += i & 1 ? 'W' : 'B';
    }

    if(c == 'B')
        for(int i = 0;i < n;i++)
            cout << (i & 1 ? a : b) << "\n";
    else
        for(int i = 0;i < n;i++)
            cout << (i & 1 ? b : a) << "\n";
    

    return 0;
}
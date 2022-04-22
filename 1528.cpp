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
    // 1 no
    // 2 2
    // 3 no
    // 4 2 4
    // 5 no
    // 6 2 4 6
    // 7 2 4 6 3
    // 8 2 4 6 8
    // 9 2 4 8 6 3
    // 10 2 4 6 8 10
    // 11 2 4 6 8 10 5
    // 13 2 4 6 8 12 10 5
    if(n == 1) cout << 1 << "\n";
    else if(n == 3 || n == 5)
        cout << -1 << "\n";
    else if(n & 1){
        if(((n - 1) / 2) & 1){
            for(int i = 2;i <= n - 1;i += 2)
                cout << i << " ";
            
            cout << (n - 1) / 2 << "\n";
        }
        else{
            for(int i = 2;i <= n - 5;i += 2)
                cout << i << " ";
            cout << n - 1 << " ";
            cout << n - 3 << " ";
            cout << (n - 3) / 2 << "\n";    
        }
    }
    else{
        for(int i = 2;i <= n;i += 2)
            cout << i << " ""\n"[i == n];
    }


    return 0;
}
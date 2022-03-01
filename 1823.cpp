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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        for(auto &ele: arr) cin >> ele;

        ll a, b, c;
        a = b = c = 0;

        sort(all(arr));
        for(int i = n - 1;i >= 0;i--){
            if(a >= b && b >= c) c += arr[i];
            else if(a >= b && c >= b) b += arr[i];
            else if(c >= a && b >= a) a += arr[i];
        }

        cout << (a == b && b == c ? "Yes" : "No") << "\n";
    }


    return 0;
}

// 5
// 5
// 2 2 2 3 3
// 3 3 2 2 2
// 2 2 2 2 1
// 2 1 1 1 1
// 1 1 1 0 0
// 0 0 0 0 0
// 3
// 3 3 3
// 9
// 3 1 4 1 5 9 2 6 5
// 1 1 2 3 4 5 5 6 9 
// 0 0 1
// 0 0 0 2 3
// 0 0 0 1 2 4
// 0 0 0 0 1 3
// 0 0 0 0 0 2 4
// 0 0 0 0 0 1 3 5
// 6
// 1 1 1 1 1 2
// 4
// 2 7 1 8
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
    vector <int> arr(n);
    for(auto &ele: arr) cin >> ele;
    sort(all(arr));

    int ans = arr[0];
    for(int i = 1;i < n;i++){
        if(arr[i] - 1 == arr[i - 1]) continue;
        ans += arr[i];
    }   

    cout << ans << "\n";

    return 0;
}
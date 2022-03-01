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

        ll mx = *max_element(all(arr)), sum = accumulate(all(arr), 0LL);

        cout << (sum % 3 == 0 && mx <= sum / 3 ? "Yes" : "No") << "\n";
    }


    return 0;
}

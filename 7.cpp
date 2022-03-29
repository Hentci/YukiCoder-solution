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
    vector <bool> prime(n + 5, true);
    auto initPrime = [&]() -> void{
        for(ll i = 2;i * i <= n;i++){
            if(prime[i])
                for(int j = i * i;j <= n;j += i)
                    prime[j] = false;
        }
    };

    initPrime();

    vector <int> p;
    for(int i = 2;i <= n;i++)
        if(prime[i]) p.push_back(i);
    
    // for(auto ele: p) cout << ele << " ";
    // cout << "\n";

    vector <bool> dp(n + 1, false);
    dp[0] = 1, dp[1] = 1;
    for(int i = 2;i <= n;i++){
        for(auto ele: p){
            if(i - ele < 0) break;
            if(!dp[i - ele]){
                dp[i] = true;
                break;
            }
        }
    }

    cout << (dp[n] ? "Win" : "Lose") << "\n";

    return 0;
}
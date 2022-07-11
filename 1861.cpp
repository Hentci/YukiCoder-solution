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
    int n, k;
    cin >> n >> k;
    vector <int> arr(n + 1);
    for(int i = 1;i <= n;i++)
        cin >> arr[i];

    bool dpl[n + 5][k + 5] = {}, dpr[n + 5][k + 5] = {};
    dpl[0][0] = dpr[n + 1][0] = true;

    // int N, K;
    // cin >> N >> K;
    // vector<int> A(N + 1);
    // rep(i, 1, N + 1) cin >> A[i];

    // bool dpl[N + 2][K + 1], dpr[N + 2][K + 1];
    // rep(i, 0, N + 2) rep(j, 0, K + 2)
    // {
    //     dpl[i][j] = false;
    //     dpr[i][j] = false;
    // }
    // dpl[0][0] = true;
    // dpr[N + 1][0] = true;
    // rep(i, 1, N + 1) rep(j, 0, K + 1)
    // {
    //     dpl[i][j] = dpl[i - 1][j];
    //     if (j >= A[i])
    //         dpl[i][j] |= dpl[i - 1][j - A[i]];
    // }
    // rrep(i, 1, N + 1) rep(j, 0, K + 1)
    // {
    //     dpr[i][j] = dpr[i + 1][j];
    //     if (j >= A[i])
    //         dpr[i][j] |= dpr[i + 1][j - A[i]];
    // }

    // if (!dpl[N][K])
    // {
    //     cout << -1 << endl;
    //     return 0;
    // }
    // int ans = 0;
    // rep(i, 1, N + 1)
    // {
    //     bool ok = true;
    //     rep(j, 0, K + 1)
    //     {
    //         if (dpl[i - 1][j] && dpr[i + 1][K - j])
    //             ok = false;
    //     }
    //     if (ok)
    //         ans++;
    // }


    return 0;
}


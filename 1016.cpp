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
    set <string> st;
    st.insert("o-o");
    st.insert("ooo");
    st.insert("oo-");
    st.insert("-oo");
    st.insert("-o--");
    st.insert("--o-");
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        bool ok = false;
        for(int i = 0;i < n;i++)
            if(st.count(s.substr(i, 3)) || st.count(s.substr(i, 4)))
                ok = true;
        int tmp = -(1 << 29);
        for(int i = 0;i < n;i++){
            if(s[i] == 'o'){
                if(tmp > 0 && (tmp & 1))
                    ok = true;
                tmp = 0;
            }
            else if(s[i] == '-') tmp++;
            else tmp = -(1 << 29);
        }
        cout << (ok ? "O" : "X") << "\n";
    }


    return 0;
}
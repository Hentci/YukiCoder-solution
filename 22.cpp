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
    string s;
    cin >> s;
    stack <int> st;
    st.push(1);
    map <int, int> mp;
    for(int i = 1;i < sz(s);i++){
        if(s[i] == ')'){
            mp[i + 1] = st.top();
            mp[st.top()] = i + 1;
            st.pop();
        }
        else{
            st.push(i + 1);
        }
    }
    cout << mp[k] << "\n";

    return 0;
}
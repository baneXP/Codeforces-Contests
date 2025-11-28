#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
//Problem Statement
/*

*/
//Observation
/*
  We have binary string s;
  and k:
  choose some position to protect
  si to 0 if these are true:
  si=1; si is not protected
  and the previous k-1 do not contain 1 
*/

void solve() {
    int n,k; cin>>n>>k;
    string s; cin>>s;

    int ans=0;
    for(int i=0; i<n; i++){
      if(s[i]=='1'){
        bool flag=true;
        for(int j=max(i-k+1,0LL); j<i; ++j){
          if(s[j]=='1'){
            flag=false;
          }
        }
        ans +=flag;
      }
    }
    cout<<ans<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
      solve();
    }
}
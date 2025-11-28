#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
//Problem Statement
/*

*/
//Observation
/*
    All we need is to make the each 
    simply replace each even with prefix max 
    and then for odd simply check else reduce left and right to max-1
*/

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    vector<int>pre(n);
    pre[0]=a[0];
    for(int i=1; i<n; i++){
        pre[i]=max(pre[i-1], a[i]); //check for the highest from 1 to n and compare with ar(n)
    }
    int ans=0;
    for(int i=0; i<n; i+=2){ //loop only though even indexes that means it checks for the even index
        int diff=-1;
        if(i>0){ //if there's a left neighbour
            diff=max(diff, a[i]-pre[i-1]);
        }
        if(i<n-1){ //if there's a right neighbour
            diff=max(diff,a[i]-pre[i+1]);
        }
        ans+=diff+1; //+1 that contribute the -1 to 0 and 3 to 4.
    }
    cout<<ans<<"\n";
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
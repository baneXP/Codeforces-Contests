#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define INF (int)1e18
typedef vector<int>vi;
const string yes="YES";
const string no="NO";
const string yesn="YES\n";
const string non="NO\n";
//Observation
/*

Necessary Conditions:
    yelloe-y
    red-r

Task:
*/

void solve() {
    int n,y,r; cin>>n>>y>>r;

    int ans=min(n,r+y/2);
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
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
    have a(n)   
    n zeroes
    n--{
        l,r
        ai=ai+1
    }
        b(n){
            after all, is possible to reorder element that makes a==b?
            max value=r-l+1 
        }
Necessary Conditions:

Task:
    max value r-l+1 
    
*/

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int zero_count=count(all(a), 0);
    int total=accumulate(all(a), 0LL);

    int val=0;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            val++;
        }
    }
    cout<<min(val, total-n+1)<<'\n';
    

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
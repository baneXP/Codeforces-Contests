#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
//Problem Statement
/*
    task is to find the possible value of subarray
    
*/
//Observation
/*

*/

void solve() {
    int n; cin>>n;
    vector<ll>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end(), greater<int>()); 
    cout<<a[0]<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
      solve();
    }
}
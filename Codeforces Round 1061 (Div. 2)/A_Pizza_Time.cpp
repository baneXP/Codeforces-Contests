#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
//Problem Statement
/*
    Hao and alex win after coding competition.
    initial they have n slices of pizza
    each the following process takes place:
        slices >=2 alex eats all 
        m be current pizza size(m>=3) and m divides in m1<=m2<=m3
    Hao eats m1
    alex eats m2
    largest m3 are remain for the last week
    task:
    max slices Hoa eats means best possible choice at each test cases.

*/
//Observation
/*
    given n slices of pizza
    there are at most 2 slices remaining alex eats all of them
    curr_size=m>=3 hao split m1,<=m2,<=m3
*/
 
void solve() {
    int n; cin>>n;
    cout<<(n%2 ? n/2 : (n-2)/2)<<'\n';
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

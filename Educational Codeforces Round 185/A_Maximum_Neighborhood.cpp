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
    first row 1 to n left to right
    second row n+1 to 2n left to right

Necessary Conditions:

Task:
*/

void solve() {
int n; cin>>n;
    if (n == 1)
        cout << 1 << '\n';
    else if (n == 2)
        cout << 9 << '\n';
    else if (n == 3 || n == 4)
        cout << 4 * (n * n - 1) - n << '\n';
    else
        cout << 5 * (n * n - n - 1) << '\n';
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
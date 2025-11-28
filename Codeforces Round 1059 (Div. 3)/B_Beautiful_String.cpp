#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
//Problem Statement
/*

*/
//Observation
/*

*/

bool check(string &s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i])
            return false;
    }
    return true;
}

void solve() {
    int n; 
    cin >> n;
    string s; 
    cin >> s;

    if (check(s)) { 
        cout << "0\n"; 
        return;
    }

    vector<int> zero, one;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') zero.push_back(i + 1); 
        else one.push_back(i + 1);
    }

    string k = "";
    for (int i = 0; i < n; i++) {
        if (s[i] != '0') k += s[i];
    }
    if (check(k)) {
        cout << zero.size() << "\n";
        for (int x : zero) cout << x << " ";
        cout << "\n";
        return;
    }

    k = "";
    for (int i = 0; i < n; i++) {
        if (s[i] != '1') k += s[i];
    }
    if (check(k)) {
        cout << one.size() << "\n";
        for (int x : one) cout << x << " ";
        cout << "\n";
        return;
    }

    cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
}

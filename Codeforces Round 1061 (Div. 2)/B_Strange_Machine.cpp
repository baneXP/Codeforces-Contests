#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<int>a(q);
    for (int i=0; i<q; i++) cin>>a[i];

    // check if there is any 'B' in the string
    bool b_count=(s.find('B') != string::npos);



    for (int i=0; i<q; i++) {
        int val=a[i];
        if (!b_count) {
            cout<<val<<'\n';
            continue;
        }

        int pos=0, ans=0;
        while (val>0) {
            if (s[pos]=='B') {
                val/=2;
                ans++;
                pos++;
                if(pos==n) pos=0;
            } 
            else {
                int cur=pos,len=0;
                while (s[cur]=='A') {
                    len++;
                    cur++;
                    if (cur==n) cur=0;
                }

                if (val>len) {
                    val -= len;
                    ans += len;
                    pos = cur;
                } 
                else{
                    ans += val;
                    val = 0;
                }
            }
        }
        cout<<ans<<'\n';
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

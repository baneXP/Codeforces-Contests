#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
//Problem Statement
/*

*/
//Observation
/*
    k--
    erase: choose an integer and erase it at most k times
    Split: choose int x>=3 split in x1,x2,x3 then  erase x from white board and append x1,x3 and x2 are removed(not written)
    these can be performmed any no. of times

    the beauty of b is gcd(ar(b))
    Task:
    max possible beauty of int on whiteboard after performing at most k erase and any number of split operations.

*/

void solve() {
    int n,k; cin>>n>>k;
    vector<int>freq(n+1, 0);
    for(int i=0; i<n; i++){
        int x; cin>>x;
        freq[x]++; //counts the frequency of x
    }
    for(int i=1; i<=n; i++) freq[i] +=freq[i-1];
    //using the prefix sums of array for each index 
    //it works as freq(l,r)=prefix[r]-prefix[l-r]
    //so it counts as the addition of 0+1 indices now for further operation it uses the new value(0+1)+ 2 indices value it always have ar[0] as 0 so (n+1) to store the pprefix sums

    for(int g=n; g>=1; g--){
        int pos=freq[min(n, 4*g-1)];
        pos-=freq[g]-freq[g-1];
        if(2*g<=n) pos-=freq[2*g] - freq[2*g-1];
        if(3*g<=n) pos-=freq[3*g] - freq[3*g-1];

        if(pos<=k){
            cout<<g<<"\n";
            return;
        }
    }
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
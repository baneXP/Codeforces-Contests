#include<bits/stdc++.h>
using namespace std;
#define int long long
 
// Problem Statement
/*
    
*/
 
// Small Observatins
/*
    so, 
        its
 
            gcd g > 1
 
            it means, 
                minimum cost to make 2 things multiples of g..
 
                for some g.
 
                u can always make them even..
 
                so here, ans = 2 or 1 or 0..
 
 
                for 0 to be possible
 
                    for g,
                    number of things in g or its multiples shud be >= 2.
 
                for 1 to be possible
 
                    for g, 
                    number of things in g or its multiples + 1.  q * g >= 1 , q * g + 1 >= 1.
 
 
                    find all divisors of a[i]
                        and find counts of g multiples based on this..
 
                    similarly do.
                        find frequeceisof q * g + 1, using divsors of a[i] - 1
*/
 
 
 
/*
 
*/
 
 
// Claims on algo 
/*  
    
 
*/
 
#define N 200010
 
int freq[N] = {0}, freq1[N] = {0};
 
vector<int> Div[N];
 
void solve(){
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
 
    vector<int> Pos;
 
    for (int i = 0; i < n; i++){
        int x = a[i];
        for (int g : Div[x]){
            Pos.push_back(g);
            freq[g]++;
        }
        for (int g : Div[x + 1]){
            Pos.push_back(g);
            freq1[g]++;
        }
    }
 
    int ans = 2;
    for (int g : Pos){
        if (freq[g] >= 2){
            ans = 0;
        }
        else if (freq[g] >= 1 && freq1[g] >= 1){
            ans = min(ans, (int)1);
        }
    }
 
    for (int g : Pos){
        freq[g] = 0;
        freq1[g] = 0;
    }
    cout << ans << '\n';
 
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    for (int g = 2; g < N; g ++){
        for (int i = g; i < N; i += g){
            Div[i].push_back(g);
        }
    }
 
    int t; cin >> t;
    while (t--) solve();
}
 
// Golden Rules
/*
    Solutions are simple.
 
    Proofs are simple.
 
    Implementations are simple.
*/

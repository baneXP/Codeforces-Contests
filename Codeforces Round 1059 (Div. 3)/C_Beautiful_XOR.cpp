#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
//Problem Statement
/*

*/
//Observation
/*  
    when not -1 we can make it to the 100 sequence operations always

*/
int bits(int n) {
    for (int i=29; i>=0; i--) if(n&(1<<i)) return i;
}

void solve() {
    int a, b; cin>>a>>b;

    if(bits(a)<bits(b)){
        cout<<-1<<'\n';
    }
    else{
        int la=bits(a);

        cout<<3<<'\n';
        cout<<(a^(1<<la))<<' ';
        //a changes to 1<<la
        a=(1<<la);
        cout<<((1<<la)-1)<<' ';
        a=(1<<la)^((1<<la)-1);
        cout<<(a^b)<<"\n";
    }
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
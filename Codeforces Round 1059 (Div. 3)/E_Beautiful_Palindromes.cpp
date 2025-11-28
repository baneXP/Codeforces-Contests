#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
//Problem Statement
/*

*/
//Observation
/*
  we need to perform the operation exactly k times. means not more, not less
  if atleast <=k under k times and equal to k times
  if atleast >=k must occur k times or more.
  Your goal is to perform these k operations in such a way that the number of palindromic subarrays∗
  in the resulting array is minimized. 
*/

void solve() {
  int n,k; cin>>n>>k;
  vector<ll>a(n);
  vector<bool>v(n);
  for(int i=0; i<n; i++) { 
    cin>>a[i];
    a[i]--;
    v[a[i]]=true;
  }
  int x=find(v.begin(), v.end(), false)- v.begin();
  if(x==n){
    x=a[n-3];
  }
  int y=0;
  while(y==x || y==a[n-1]){
    y++;
  }
  for(int i=0; i<k; i++) { 
    int lol;
    if(i%3==0){
      lol=x;
    }
    else if(i%3==1){
      lol=y;
    } 
    else{
      lol=a[n-1];
    }
    cout<<lol+1<<" \n"[i==k-1];
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
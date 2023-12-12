#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; int n; cin>>t>>n;
  int a[n]; for(int &x:a) cin>>x;
  cout<<n*t-accumulate(a,a+n,0)+t;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  int a[n-1]; for(int &x:a) cin>>x;
  cout<<1ll*n*(n+1)/2-accumulate(a,a+n-1,0ll);
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  int ans=1;
  const int M = 1e9+7;
  while(n--) ans=(ans<<1)%M;
  cout<<ans;
}
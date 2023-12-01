#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin>>t;
  while(t--) {
    int y,x; cin>>y>>x;
    int mx=max(x,y);
    if(mx&1) swap(x,y);
    cout<<1ll*mx*mx-x+1-mx+y<<"\n";
  }
}
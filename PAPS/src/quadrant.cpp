#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int x,y; cin>>x>>y;
  if(y>0) {
    if(x>0) cout<<1;
    else cout<<2;
  }
  else {
    if(x>0) cout<<4;
    else cout<<3;
  }
}
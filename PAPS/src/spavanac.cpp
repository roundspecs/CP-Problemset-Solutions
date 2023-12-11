#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int h,m; cin>>h>>m;
  m += 60*h;
  m = (m-45+60*24)%(60*24);
  cout<<m/60<<" "<<m%60;
}
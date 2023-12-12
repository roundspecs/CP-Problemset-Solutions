#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  auto cmp = [](string x, string y) {
    if(x[0]==y[0]) return x[1]<y[1];
    return x[0]<y[0];
  };
  while(cin>>n) {
    if(n==0) break;
    vector<string> a(n);
    for(auto&x:a) cin>>x;
    stable_sort(a.begin(),a.end(),cmp);
    for(auto&x:a) cout<<x<<"\n";
    cout<<"\n";
  }
}
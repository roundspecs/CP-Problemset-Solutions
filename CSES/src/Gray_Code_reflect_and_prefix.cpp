#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  vector<int> b {0,1};
  for(int i=1; i<n; i++)
    for(int j=b.size()-1; j>=0; j--)
      b.push_back(b[j] | (1<<i));
  for(auto&x:b) {
    cout<<bitset<16>(x).to_string().substr(16-n)<<"\n";
  }
}
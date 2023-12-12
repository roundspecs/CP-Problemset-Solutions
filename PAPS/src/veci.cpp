#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  string s; cin>>s;
  if(next_permutation(s.begin(),s.end())) cout<<s;
  else cout<<0;
}
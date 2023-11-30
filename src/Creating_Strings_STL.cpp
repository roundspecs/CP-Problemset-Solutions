#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  string s; cin>>s;
  sort(s.begin(),s.end());
  vector<string> perms;
  do {
    perms.push_back(s);
  } while(next_permutation(s.begin(),s.end()));
  cout<<perms.size()<<"\n";
  for(string perm: perms)
    cout<<perm<<"\n";
}
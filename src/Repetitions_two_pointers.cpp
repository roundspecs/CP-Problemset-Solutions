#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  string s; cin>>s;
  int n=s.size();
  int mx=0;
  for(int i=0,len; i<n; i+=len) {
    len=0;
    while(i+len<n && s[i]==s[i+len]) len++;
    mx=max(mx,len);
  }
  cout<<mx;
}
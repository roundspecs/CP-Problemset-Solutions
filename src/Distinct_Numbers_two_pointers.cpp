#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  vector<int> a(n);
  for(int &x:a) cin>>x;

  sort(a.begin(),a.end());

  int ans=0;
  for(int i=0, len; i<n; i+=len) {
    len=0;
    while(a[i]==a[i+len]) len++;
    ans++;
  }

  cout<<ans;
}
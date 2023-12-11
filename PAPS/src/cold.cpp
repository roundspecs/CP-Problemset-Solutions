#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  int cnt=0;
  while(cin>>n) {
    cnt+=(n<0);
  }
  cout<<cnt;
}
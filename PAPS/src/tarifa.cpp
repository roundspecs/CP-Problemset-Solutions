#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; int n; cin>>t>>n;
  n*=t;
  int x; while(cin>>x) {
    n-=x;
  }
  cout<<n+t;
}
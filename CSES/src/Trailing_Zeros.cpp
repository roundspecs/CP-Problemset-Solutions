#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  int fives=0;
  for(int i=5; i<=n; i*=5)
    fives+=n/i;
  cout<<fives;
}
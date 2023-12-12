#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  vector<int> a(n); for(int&x:a) cin>>x;
  sort(a.rbegin(), a.rend());
  long long sum=0;
  for(int i=2; i<n; i+=3) {
    sum+=a[i];
  }
  cout<<sum;
}
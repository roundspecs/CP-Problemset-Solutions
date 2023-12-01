#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  int a[n]; for(int &x:a) cin>>x;
  long long res=0;
  for(int i=1; i<n; i++) {
    if(a[i-1]>a[i]) {
      res+=a[i-1]-a[i];
      a[i]=a[i-1];
    }
  }
  cout<<res;
}
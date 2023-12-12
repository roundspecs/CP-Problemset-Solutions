#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  int a[n]; for(int&x:a) cin>>x;
  cout<<count_if(a,a+n,[](int x){return x<0;});
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  int a[n-1]; for(int &x:a) cin>>x;
  // sum of natural numbers upto n
  int xor_sum=n * ((n&1)==0) + ((n&3)==1 || (n&3)==2);
  cout<<(xor_sum^accumulate(a,a+n-1,0,bit_xor<int>()));
}
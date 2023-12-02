#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  for(int k=1; k<=n; k++) {
    long long knight1 = k*k;
    long long knight2 = k*k-1;
    long long both = (knight1*knight2)/2;
    int twoByThrees = (k-1)*(k-2);
    cout<<both-4*twoByThrees<<"\n";
  }
}
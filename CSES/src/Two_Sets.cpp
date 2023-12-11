#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n; cin>>n;
  int rem=n&3;
  if(rem == 1 || rem == 2)
    return cout<<"NO",0;
  cout<<"YES\n";
  vector<int> v1,v2;
  if(rem) {
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    for(int i=4; i<=n; i+=2) {
      if(i%4) {
        v1.push_back(i);
        v2.push_back(i+1);
      }
      else {
        v1.push_back(i+1);
        v2.push_back(i);
      }
    }
  }
  else {
    for(int i=1; i<=n; i+=2) {
      if(i%4==1) {
        v1.push_back(i);
        v2.push_back(i+1);
      }
      else {
        v1.push_back(i+1);
        v2.push_back(i);
      }
    }
  }
  cout<<v1.size()<<"\n";
  for(int&x:v1) cout<<x<<" ";
  cout<<"\n";
  cout<<v2.size()<<"\n";
  for(int&x:v2) cout<<x<<" ";
  cout<<"\n";
}
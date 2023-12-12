#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while(cin>>n) {
    if(n==0) break;
    vector<tuple<string,int,int>> a(n);
    char c;
    for(auto&[s,h,m]:a) {
      cin>>h>>c>>m>>s;
      h%=12;
    }
    sort(a.begin(),a.end());
    for(auto&[s,h,m]:a) {
      if(h==0) h=12;
      cout<<h<<":"<<setw(2)<<setfill('0')<<m<<" "<<s<<"\n";
    }
    cout<<"\n";
  }
}
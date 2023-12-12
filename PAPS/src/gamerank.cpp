#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  string s; cin>>s;

  auto mxstars = [&](int i) {
    if(i<=10) return 5;
    if(i<=15) return 4;
    if(i<=20) return 3;
    if(i<=25) return 2;
  };

  int stars=0;
  int rank=25;

  auto addStar = [&]() {
    if(rank==0) return;
    if(mxstars(rank)==stars) {
      rank--;
      stars=1;
    }
    else {
      stars++;
    }
  };

  auto removeStar = [&]() {
    if(rank==0 || rank > 20) return;
    if(stars==0) {
      if(rank==20) return;
      else {
        rank++;
        stars=mxstars(rank)-1;
      }
    }
    else {
      stars--;
    }
  };

  for(int i=0; i<s.size(); i++) {
    if(s[i]=='L') {
      removeStar();
    }
    else {
      if(rank >= 6 && i>=2 && s[i-1]=='W' && s[i-2]=='W') {
        addStar();
      }
      addStar();
    }
  }

  cout<<(rank ? to_string(rank) : "Legend");
}
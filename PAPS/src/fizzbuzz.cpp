#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int x,y,n; cin>>x>>y>>n;
  for(int i=1; i<=n; i++) {
    if(i%x==0 && i%y==0) cout<<"FizzBuzz\n";
    else if(i%x==0) cout<<"Fizz\n";
    else if(i%y==0) cout<<"Buzz\n";
    else cout<<i<<"\n";
  }
}
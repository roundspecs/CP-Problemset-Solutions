#include <bits/stdc++.h>
using namespace std;
 
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int freq[26]{};
  string s; cin>>s;
  for(char c:s) freq[c-'A']++;
  int odds=0;
  for(int f:freq) odds+=(f&1);
  if(odds>1) 
    return cout<<"NO SOLUTION",0;
  for(int i=0; i<26; i++)
    for(int j=0; j<freq[i]/2; j++)
      cout<<char('A'+i);
  for(int i=0; i<26; i++)
    if(freq[i]&1)
      cout<<char('A'+i);
  for(int i=25; i>=0; i--)
    for(int j=0; j<freq[i]/2; j++)
      cout<<char('A'+i);
}
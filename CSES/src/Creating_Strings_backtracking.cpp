#include <bits/stdc++.h>
using namespace std;

int freq[26]; // frequency of characters
vector<string> perms; // permutations
string buffer, s;

void all_perms(int taken=0) {
  if(buffer.size()==s.size()) {
    perms.push_back(buffer);
    return;
  }
  for(int i=0; i<26; i++) {
    if(freq[i]) {
      freq[i]--;
      buffer.push_back('a'+i);
      all_perms(taken+1);
      buffer.pop_back();
      freq[i]++;
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin>>s;
  for(char c:s) freq[c-'a']++;
  all_perms();
  cout<<perms.size()<<"\n";
  for(string perm: perms) cout<<perm<<"\n";
}
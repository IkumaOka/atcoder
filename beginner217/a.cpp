#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  string s, t;
  cin >> s >> t;
  string ans = "Yes";
  vector<string> vec1 = {s, t};
  sort(vec1.begin(),vec1.end());
  if (vec1[0] == t){
    ans = "No";
  }
  cout << ans << endl;
  return 0;
}
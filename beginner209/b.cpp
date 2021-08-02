#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int n, x;
  int s = 0;
  string ans = "No";
  cin >> n >> x;
  vector<int> a(n);
  rep(i, n){cin >> a[i];}
  rep(i, n){
    if(i % 2 == 1){
      a[i] -= 1;
    }
    s += a[i];
  }
  if (s <= x){
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
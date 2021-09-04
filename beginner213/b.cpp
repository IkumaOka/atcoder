#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int n, m, ans;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  // rep(i, n) cout << a[i] << endl;
  rep(i, n){
    if(i != n-1 && a[i] > m){
      m = a[i];
      ans = i+1;
    } else if (i == n-1 && a[i] < m){
      m = a[i];
      ans = i+1;
    }
  }
  cout << ans << endl;
  return 0;
}
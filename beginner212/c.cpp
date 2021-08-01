#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
#define INF 10000000;
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int n, m;
  int ans = INF;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  rep(i, n)rep(j, m){
    if (ans > abs(a[i]-b[j])){
      ans = abs(a[i]-b[j]);
    }
  }
  cout << ans << endl;
  return 0;
}
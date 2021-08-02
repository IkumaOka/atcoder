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
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ai = 0, bi = 0;
  while(ai < n && bi < m){
    ans = min(ans, abs(a[ai] - b[bi]));
    if(a[ai] < b[bi]) ++ai; else bi++;
  }
  cout << ans << endl;
  return 0;
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int a, ans;
  cin >> a;
  ans = a + pow(a, 2) + pow(a, 3);
  cout << ans << endl;
  return 0;
}
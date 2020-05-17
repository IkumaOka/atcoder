#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int n, a, b;
  string ans = "pon";
  cin >> n;
  a = n % 100;
  b = a % 10;
  if (b == 2 or b == 4 or b == 5 or b == 7 or b == 9) {
    ans = "hon";
  }
  if (b == 0 or b == 1 or b == 6 or b == 8) {
    ans = "pon";
  }
  if (b == 3) {
    ans = "bon";
  }
  cout << ans << endl;
  return 0;
}
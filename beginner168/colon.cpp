#include <bits/stdc++.h>
#include <iomanip>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
static const double pi = 3.141592653589793;

int main() { 
  int a, b, h, m;
  double ans;
  double c;
  cin >> a >> b >> h >> m;
  // 0.5を使ってる時点で小数になるのにlonglong型など整数形の型にするのはおかしい
  // ll a_angle = h * 30 + 0.5 * m;
  double a_angle = h * 30 + 0.5 * m;
  // ll b_angle = 6 * m;
  double b_angle = 6 * m;
  // int angle = a_angle - b_angle;
  double angle = a_angle - b_angle;
  if (angle < 0) {
    angle = angle * (-1);
  }
  if (angle > 180) {
    angle = 360 - angle;
  }
  c = angle / 180.0;
  ans = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(pi * c));
  cout << fixed;
  cout << setprecision(20) << ans << endl;
  return 0;
}
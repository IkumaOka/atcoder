#include <bits/stdc++.h>
#include <iomanip>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const double PI = acos(-1);

int main() { 
  int a, b, h, m;
  cin >> a >> b >> h >> m;
  double th = double(h*60+m)/720 * 2*PI;
  double tm = double(m)/60 * 2*PI;
  // 時針Aの座標
  double xh = a * cos(th), yh = a * sin(th);
  // 分針Bの座標
  double xm = b * cos(tm), ym = b * sin(tm);
  // 座標の差
  double dx = xh - xm, dy = yh - ym;
  double ans = sqrt(dx*dx + dy*dy);
  printf("%.10f\n", ans);
  return 0;
}
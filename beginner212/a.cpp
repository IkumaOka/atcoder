#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int x1, x2, x3, x4;
  cin >> x1 >> x2 >> x3 >> x4;
  string ans = "Strong";
  if (x1 == x2 == x3 == x4){
    ans = "Gold";
  } else if(a == 0 && b > 0){
    ans = "Silver";
  } else if (a > 0 && b > 0){
    ans = "Alloy";
  }
  cout << ans << endl;
  return 0;
}
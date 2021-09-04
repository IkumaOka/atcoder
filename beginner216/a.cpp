#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  float n;
  double syousu;
  string ans = "";
  string ans2;
  cin >> n;
  syousu = (n - int(n)) * 10;
  if(syousu <= 2){
    ans = "-";
  } else if (6.9999 <= syousu){
    ans = "+";
  }
  ans2 = to_string(int(n)) + ans;
  cout <<  ans2 << endl;
  return 0;
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

std::ostream &operator<<(std::ostream &dest, __int128_t value) {
  std::ostream::sentry s(dest);
  if (s) {
    __uint128_t tmp = value < 0 ? -value : value;
    char buffer[128];
    char *d = std::end(buffer);
    do {
      --d;
      *d = "0123456789"[tmp % 10];
      tmp /= 10;
    } while (tmp != 0);
    if (value < 0) {
      --d;
      *d = '-';
    }
    int len = std::end(buffer) - d;
    if (dest.rdbuf()->sputn(d, len) != len) {
      dest.setstate(std::ios_base::badbit);
    }
  }
  return dest;
}

__int128 parse(string &s) {
  __int128 ret = 0;
  for (int i = 0; i < s.length(); i++)
    if ('0' <= s[i] && s[i] <= '9')
      ret = 10 * ret + s[i] - '0';
  return ret;
}

int main() { 
  int n;
  cin >> n;
  ll a[n];
  ll z = pow(10, 18);
  __int128 s = 1;
  bool ss = true;

  rep(i, n){
    cin >> a[i];
    if (a[i] == 0){
      ss = false;
    }
  }
  if (ss){
    rep(i, n){
      s *= a[i];
      // cout << s << endl;
      if(s > z || s < 0){
        s = -1;
        break;
      }
    }
  }
  if (ss){
    cout << s << endl;
  } else{
    cout << 0 << endl;
  }
  return 0;
}
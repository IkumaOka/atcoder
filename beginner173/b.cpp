#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  int n;
  int ac = 0;
  int wa = 0;
  int tle = 0;
  int re = 0;
  cin >> n;
  vector<string> a(n);
  rep(i, n){cin >> a.at(i);}
  // rep(i, n){cout << a[i] << endl;}
  rep(i,n){
    if (a[i] == "AC"){
        ac += 1;
    } else if(a[i] == "WA"){
        wa += 1;
    } else if(a[i] == "TLE"){
        tle += 1;
    } else if(a[i] == "RE"){
        re += 1;
    }
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
  return 0;
}
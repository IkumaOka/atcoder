#include <bits/stdc++.h>
#include <cstdlib>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
  set<int> p;
  int x, n, ans;
  cin >> x >> n;
  int copy_x = x;
  int true_x = x;
  rep(i, n){
    int a;
    cin >> a;
    p.insert(a);
  }
  bool p_end = true;
  bool m_end = true;
  int plus_x, minus_x;
  while(p_end){
    if(p.count(x)){x++;}
    else{
      plus_x = x;
      p_end = false;
    }
  }
  while(m_end){
    if(p.count(copy_x)){copy_x--;}
    else{
      minus_x = copy_x;
      m_end = false;
    }
  }
  int m_v = abs(minus_x - true_x);
  int p_v = abs(plus_x - true_x);
  if(m_v < p_v){
    cout << minus_x << endl;
  }else if(m_v == p_v){
    cout << min(plus_x, minus_x)<< endl;
  }else{
    cout << plus_x << endl;
  }
  return 0;
}
#include <bits/stdc++.h>
#include <iomanip>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using graph = vector<vector<int>>;

int main() {
  int n, m; cin >> n >> m;
  graph g(n);
  rep(i, m){
    int a, b;
    cin >> a >> b;
    g[a-1].push_back(b-1);
    g[b-1].push_back(a-1);
  }

  rep(i, n){
    rep(j, g[i].size()){
        cout << g.at(i).at(j);
    }
    cout << endl;
  }
  return 0;
}
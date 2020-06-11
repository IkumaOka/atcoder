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
    g[a].push_back(b);
    g[b].push_back(a);
  }

  // BFS のためのデータ構造
  // n個の要素を全て-1で初期化
  vector<int> dist(n, -1); // 全頂点を「未訪問」に初期化
  queue<int> que;

  // 初期条件 (頂点 0 を初期ノードとする)
  dist[0] = 0;
  que.push(0); // 0 を橙色頂点にする

  // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (int nv : g[v]) {
            if (dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない

            // 新たな白色頂点 nv について距離情報を更新してキューに追加する
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

  // 結果出力 (各頂点の頂点 0 からの距離を見る)
  for (int v = 0; v < n; ++v) cout << v << ": " << dist[v] << endl;
  return 0;
}
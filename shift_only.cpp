#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() { 
    int n;
    int count = 0;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
      cin >> vec.at(i);
    }
    while (true) {
        for (int i = 0; i < n; i++) {
            if (vec.at(i) % 2 != 0) {
                break;
            } else {
                vec.at(i) = vec.at(i) % 2;
            }
        }
        count += 1;
    }
    return 0;
}
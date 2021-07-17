#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, sum_ans;
    cin >> n;
    vector<int> array(n);
    rep(i, n){cin >> array.at(i);}
    cin >> sum_ans;
    string ans = "No";
    int k = 2;
    while (k <= array.size()){
        int j = 0;
        while (j < array.size()){
            for (int i = 0; i < array.size()-j-1; i++){
                int start_point = i + j;
                if (start_point + k < array.size()+1){
                    int sum = accumulate(array.begin()+start_point, array.begin()+start_point+k, 0);
                    if (sum == sum_ans){
                        ans = "Yes";
                    }
                }
            }
            j += 1;
        }
        k += 1;
    }
    cout << ans << endl;
    return 0;
}
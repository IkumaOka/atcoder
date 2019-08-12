#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    vector<int> mochi_length;
    cin >> N;
    for(int i = 0; i < N; ++i){
        int x;
        cin >> x;
        mochi_length.push_back(x);
    }
    sort(mochi_length.begin(), mochi_length.end(), less<int>());
    mochi_length.erase(unique(mochi_length.begin(), mochi_length.end()), mochi_length.end());
    cout << mochi_length.size() << endl;
}
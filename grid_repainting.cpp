#include <iostream>
using namespace std;

int main(){   
    int h, w;
    cin >> h >> w;
    int num = 0;
    string board[50];
    for (int i = 0; i < h; ++i) cin >> board[i];

    for (int i = 1; i < h; ++i){
    	for (int j = 1; j < w; ++j){

    		if (board[i][j] == '#' && board[i][j - 1] != '#' && board[i - 1][j] != '#' && board[i][j + 1] != '#' && board[i + 1][j] != '#') num++;
    	}
    }
    if (num == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
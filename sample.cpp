#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int N, Y;
    string array[3][5] = {{'.', '.', '.', '.', '.'},
                       {'.', '#', '.', '#', '.'},
                       {'.', '.', '.', '.', '.'}};
    for(int i = 0; i < 3; i++){
        cout << array[i][0];
        // for(int j = 0; j < 5; j++){
        //     cout << array[i][j]; 
        // }
    }
    return 0;
}
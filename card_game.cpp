#include <iostream>
using namespace std;

int findMaxNum(int *num_array, int N) {
  int max = num_array[0];
    for(int j = 0; j < N; j++){
        if(num_array[j] < num_array[j+1]) max = num_array[j+1];
     }
  return max;
}
int findMaxNumIndex(int *num_array, int N, int max){
    for(int h = 0; h < N; h++){
        if(num_array[h] == max)
            return h;
    }
    return 0;
}
int main()
{   
    int N;
    int *num_array;
    int max, max_idx;
    int alice = 0;
    int bob = 0;
    cin >> N;
    num_array = new int[N];
    for (int i = 0; i < N; i++) cin >> num_array[i];
    for (int k = 0; k < N; k++){
        max = findMaxNum(num_array, N);
        if(k % 2 == 0){
            alice += max;
        }else {
            bob += max;
        }
        max_idx = findMaxNumIndex(num_array, N, max);
        for (int l = max_idx; l < N; l++){
            num_array[l] = num_array[l+1];
        }
    }
    cout << alice - bob << endl;


    delete[] num_array;
    return 0;
}
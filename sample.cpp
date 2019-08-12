#include <vector>
#include <stdio.h>
 
int main(void) {
    std::vector<int> vec{ 1, 2, 3, 4, 5, 6 };
 
    printf("要素数：%lu\n", vec.size());
 
    return 0;
}
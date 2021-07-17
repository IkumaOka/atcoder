#include <bits/stdc++.h>

int a[4] = {1, 2, 4, 7};
int n = 4;
int k = 15;

bool dfs(int i, int sum){
    if (i == n) return sum == k;

    if (dfs(i+1, sum)) return true;

    if (dfs(i+1, sum+a[i])) return true;

    return false;
}

int main() {
    if (dfs(0, 0)) printf("Yes\n");
    else printf("No\n");
}
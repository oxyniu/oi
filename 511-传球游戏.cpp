#include<bits/stdc++.h>//@yyy
using namespace std;
int f[30][30] = { 0 };
int main(){
    freopen("ball.in", "r", stdin);
    freopen("ball.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    f[0][1] = 1;
    for (int i = 1;i <= m;i++){
        for (int j = 1;j <= n;j++){
            if (j == 1) f[i][j] = f[i - 1][n] + f[i - 1][j + 1];
            else if (j == n) f[i][j] = f[i - 1][1] + f[i - 1][j - 1];
            else f[i][j] = f[i - 1][j - 1] + f[i - 1][j + 1];
        }
    }
    cout << f[m][1] << endl;
    return 0;
}
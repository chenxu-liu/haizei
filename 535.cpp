/*************************************************************************
	> File Name: 535.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月18日 星期三 18时23分41秒
 ************************************************************************/
#include <iostream>
using namespace std;

int n, m, sx, sy, ans = 1;
char mmap[55][55];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

void DFS(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if (mmap[tx][ty] == '.') {
            mmap[tx][ty] = 0;
            ans++;
            DFS(tx, ty);
        }
    }
}

int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '@') {
                sx = i;
                sy = j;
            }
        }
    }
    DFS(sx, sy);
    cout << ans << endl;

    return 0;
}

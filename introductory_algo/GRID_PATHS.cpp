// ⠀⠀⠀⠀⠀⠀⠀⠀⠀ ＿＿
// 　　　　　／＞　　フ
// 　　　　　| 　_　 _ l
// 　 　　　／` ミ＿xノ
// 　　 　 /　　　 　 |
// 　　　 /　 ヽ　　 ﾉ
// 　 　 │　　|　|　|
// 　／￣|　　 |　|　|
// 　| (￣ヽ＿_ヽ_)__)
// 　＼二つ
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
// LOGIC BEFORE CODE
// CHECK FOR YOUR OWN TESTCASES
bool grid[9][9];
const int DIR_LEN = 4;
int dr[DIR_LEN] = {-1, 0, 1, 0};
int dc[DIR_LEN] = {0, 1, 0, -1};
int path[48];
bool check(int &row, int &col)
{
    if ((grid[row][col - 1] && grid[row][col + 1]) && (!grid[row - 1][col] && !grid[row + 1][col]))
        return 0;
    if ((grid[row - 1][col] && grid[row + 1][col]) && (!grid[row][col + 1] && !grid[row][col - 1]))
        return 0;
    return 1;
}
int func(int idx, int row, int col)
{
    // cout << row << " " << col << " " << idx << endl;
    if (!check(row, col))
        return 0;
    if (row == 7 && col == 1)
    {
        if (idx == 48)
            return 1;
        return 0;
    }
    if (idx == 48)
        return 0;
    int res = 0;
    grid[row][col] = true;
    if (path[idx] < 4)
    {
        int nxtR = row + dr[path[idx]];
        int nxtC = col + dc[path[idx]];
        if (!grid[nxtR][nxtC])
            res += func(idx + 1, nxtR, nxtC);
    }
    // see Java solution for optimization 4 implementation
    else
    { // iterate through all four possible turns
        for (int i = 0; i < DIR_LEN; i++)
        {
            int nxtR = row + dr[i];
            int nxtC = col + dc[i];
            if (grid[nxtR][nxtC])
                continue;
            res += func(idx + 1, nxtR, nxtC);
        }
    }
    grid[row][col] = false;
    return res;
}
void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i <= 8; i++)
    {
        grid[0][i] = true;
        grid[8][i] = true;
        grid[i][0] = true;
        grid[i][8] = true;
    }
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            grid[i][j] = false;
        }
    }
    for (size_t i = 0; i < 48; i++)
    {
        if (s[i] == 'U')
            path[i] = 0;
        if (s[i] == 'D')
            path[i] = 2;
        if (s[i] == 'R')
            path[i] = 1;
        if (s[i] == 'L')
            path[i] = 3;
        if (s[i] == '?')
            path[i] = 4;
    }
    int idx = 0, r = 1, c = 1;
    int ans = func(idx, r, c);
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
// LOGIC BEFORE CODE
// CHECK FOR YOUR OWN TESTCASES

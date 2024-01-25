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
bool check(int row, int col, vector<vector<char>> &grid, vector<int> &r, vector<int> &ld, vector<int> &ud)
{
    return grid[row][col] == '.' && !r[row] && !ld[row + col] && !ud[7 + row - col];
}
int func(int col, vector<vector<char>> &grid, vector<int> &r, vector<int> &ld, vector<int> &ud)
{
    if (col == 8)
    {
        return 1;
    }
    int res = 0;
    for (int row = 0; row < 8; row++)
    {
        if (check(row, col, grid, r, ld, ud))
        {
            r[row] = 1, ld[row + col] = 1, ud[7 + row - col] = 1;
            res = res + func(col + 1, grid, r, ld, ud);
            r[row] = 0, ld[row + col] = 0, ud[7 + row - col] = 0;
        }
    }
    return res;
}
void solve()
{
    vector<vector<char>> grid(8, vector<char>(8));
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> grid[i][j];
        }
    }
    vector<int> r(8, 0), ld(16, 0), ud(16, 0);
    cout << func(0, grid, r, ld, ud);
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

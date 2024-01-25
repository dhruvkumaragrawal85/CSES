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
void solve()
{
    int q;
    cin >> q;
    while (q--)
    {
        ll row, col;
        cin >> row >> col;
        ll start;
        if (row > col)
        {
            if (!(row & 1))
            {
                start = row * row;
                start = start - col + 1;
            }
            else
            {
                start = (row - 1) * (row - 1) + 1;
                start = start + col - 1;
            }
        }
        else
        {
            if (col & 1)
            {
                start = col * col;
                start = start - row + 1;
            }
            else
            {
                start = (col - 1) * (col - 1) + 1;
                start = start + row - 1;
            }
        }
        cout << start << '\n';
    }
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

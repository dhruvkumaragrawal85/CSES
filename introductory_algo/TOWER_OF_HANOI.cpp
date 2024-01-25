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
vector<pair<int, int>> res;
void func(int n, int from, int aux, int to)
{
    if (n == 0)
    {
        return;
    }
    func(n - 1, from, to, aux);
    res.push_back({from, to});
    func(n - 1, aux, from, to);
}
void solve()
{
    int n;
    cin >> n;
    func(n, 1, 2, 3);
    cout << res.size() << endl;
    for (auto x : res)
        cout << x.first << " " << x.second << endl;
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

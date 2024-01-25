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
// ll binexp(ll n)
// {
//     ll res = 1, base = 2;
//     while (n)
//     {
//         if (n & 1)
//         {
//             res = (res * base) % n;
//         }
//         base = (base * base) % n;
//         n = n >> 1;
//     }
//     return res;
// }
void solve()
{
    int n;
    cin >> n;
    ll ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = (ans * 2) % M;
    }
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

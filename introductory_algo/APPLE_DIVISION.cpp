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
void func(int i, ll curr, ll &ans, vector<ll> &arr, ll sum)
{
    if (i < 0)
    {
        ans = min(ans, abs(2 * curr - sum));
        return;
    }
    func(i - 1, curr, ans, arr, sum);
    func(i - 1, curr + arr[i], ans, arr, sum);
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> arr;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
        sum += t;
    }
    ll ans = INT_MAX;
    func(n - 1, 0, ans, arr, sum);
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

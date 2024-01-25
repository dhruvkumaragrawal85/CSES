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
vector<string> base = {"0", "1"};
vector<string> func(int n)
{
    if (n == 1)
    {
        return base;
    }
    vector<string> res = func(n - 1);
    vector<string> ans;
    int t = res.size();
    for (int i = 0; i < t; i++)
        ans.push_back('0' + res[i]);
    for (int i = t - 1; i >= 0; i--)
        ans.push_back('1' + res[i]);
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<string> ans = func(n);
    for (auto x : ans)
        cout << x << endl;
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

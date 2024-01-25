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
    string s;
    cin >> s;
    map<char, int> hsh;
    int cnt = 0;
    for (char c : s)
        hsh[c]++;
    for (auto x : hsh)
    {
        if (x.second & 1)
            cnt++;
    }
    if (cnt > 1)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        string res = "", rest = "";
        for (auto x : hsh)
        {
            if (x.second & 1)
            {
                for (int i = 0; i < x.second; i++)
                {
                    res.push_back(x.first);
                }
            }
            else
            {
                for (int i = 0; i < x.second / 2; i++)
                {
                    rest.push_back(x.first);
                }
            }
        }
        string temp = rest;
        reverse(temp.begin(), temp.end());
        cout << rest << res << temp;
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

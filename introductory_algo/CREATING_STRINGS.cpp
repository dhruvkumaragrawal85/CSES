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
vector<string> ans;
void func(string s, string l)
{
    if (s.length() < 1)
    {
        ans.push_back(l);
    }
    unordered_set<char> hsh;
    for (int i = 0; i < s.length(); i++)
    {

        if (hsh.find(s[i]) != hsh.end())
            continue;
        else
            hsh.insert(s[i]);
        string temp = "";
        if (i < s.length() - 1)
            temp = s.substr(0, i) + s.substr(i + 1);
        else
            temp = s.substr(0, i);
        func(temp, l + s[i]);
    }
}
void solve()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int n = s.size();
    string temp = "";
    func(s, temp);
    cout << ans.size() << endl;
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

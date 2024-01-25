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
    int n;
    cin >> n;
    if (n % 4 == 0)
    {

        cout << "YES\n";
        cout << n / 2 << '\n';
        for (int i = 1; i <= n / 4; i++)
        {
            cout << i << " " << (n + 1) - i << " ";
        }
        cout << '\n'
             << n / 2 << '\n';
        for (int i = n / 4 + 1; i <= n / 2; i++)
        {
            cout << i << " " << (n + 1) - i << " ";
        }
    }
    else if (n % 4 == 3)
    {

        cout << "YES\n";
        cout << n / 2 << '\n';
        n--;
        for (int i = 1; i <= n / 4; i++)
        {
            cout << i << " " << (n + 1) - i << " ";
        }
        cout << n + 1 << '\n'
             << n / 2 + 1 << '\n';
        for (int i = n / 4 + 1; i <= n / 2; i++)
        {
            cout << i << " " << (n + 1) - i << " ";
        }
    }
    else
    {
        cout << "NO\n";
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

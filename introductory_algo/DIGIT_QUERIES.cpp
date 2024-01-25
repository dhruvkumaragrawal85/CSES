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
    vector<ll> powers_of_10(19, 1);
    for (int i = 1; i <= 18; i++)
    {
        powers_of_10[i] = powers_of_10[i - 1] * 10;
    }
    while (q--)
    {
        ll index = 0;
        cin >> index;
        ll digit_so_far = 0, digit_prefix = 0;
        int digits;
        for (int i = 1; i < 18; i++)
        {
            digit_so_far = digit_so_far + (powers_of_10[i] - powers_of_10[i - 1]) * i;
            if (digit_so_far >= index)
            {
                digits = i;
                break;
            }
            digit_prefix = digit_prefix + (powers_of_10[i] - powers_of_10[i - 1]) * i;
        }
        ll lo = powers_of_10[digits - 1];
        ll hi = powers_of_10[digits] - 1;
        ll best = 0;
        ll starting_pos;
        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            ll start = digit_prefix + 1 + (mid - powers_of_10[digits - 1]) * digits;
            if (start <= index)
            {
                if (mid > best)
                {
                    best = mid;
                    starting_pos = start;
                }
                lo = mid + 1;
            }
            else
                hi = mid - 1;
        }
        string number = to_string(best);
        cout << number[index - starting_pos] << '\n';
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

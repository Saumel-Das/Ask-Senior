#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long ll;
typedef double dl;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl
#define mem(a,b) memset(a, b, sizeof(a))
#define check cout << "yuhu" << endl


void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool ans = true;
    for(int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            ans = false;
            break;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
int main()
{
    optimize();

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
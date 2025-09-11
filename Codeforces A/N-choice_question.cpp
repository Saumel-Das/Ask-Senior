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
    int n, a, b;
    cin >> n >> a >> b;
    int sum = a + b, ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        if(temp == sum)
        {
            ans = i;
        }
    }
    cout << ans << endl;
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
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
#define mem(a, b) memset(a, b, sizeof(a))
#define check cout << "yuhu" << endl

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> v(n + 1, 0);
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<ll> pref(n + 1, 0);
    for(int i = 2; i <= n; i++)
    {
        if(v[i] < v[i - 1])
        {
            pref[i] = pref[i - 1] + (v[i - 1] - v[i]);
        }
        else pref[i] = pref[i - 1];
    }
    
    vector<ll> suff(n + 1, 0);
    for(int i = n - 1; i >= 1; i--)
    {
        if(v[i + 1] < v[i])
        {
            suff[i] = suff[i + 1];
        }
        else
        {
            suff[i] = suff[i + 1] + abs(v[i] - v[i + 1]);
        }
    }
    // for(int i = 1; i <= n; i++) cout << suff[i] << " ";
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        if(a < b)
        {
            cout << pref[b] - pref[a] << endl;
        }
        else
        {
            cout << abs(suff[a] - suff[b]) << endl;
        }
    }

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
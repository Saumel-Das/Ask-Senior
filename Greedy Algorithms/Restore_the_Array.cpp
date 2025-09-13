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
    int n;
    cin >> n;
    vector<ll> v(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
    bool found = false;
    int indx = 0;
    for (int i = 0; i < n - 2; i++)
    {
        ll temp = max(v[i], v[i + 1]);
        if (temp == v[i])
            continue;
        else
        {
            found = true;
            indx = i;
            break;
        }
    }
    if (found)
    {
        v.insert(v.begin() + indx, v[indx]);
        for (int i = indx + 1; i < v.size() - 1; i++)
        {
            ll temp = max(v[i], v[i + 1]);
            if (temp == v[i])
            {
                v[i] = v[i + 1];
            }
        }
        for (auto u : v)
            cout << u << " ";
        nl;
        return;
    }
    else
    {
        v.push_back(v[n - 2]);
        for (auto u : v)
            cout << u << " ";
        nl;
        return;
    }
}
int main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
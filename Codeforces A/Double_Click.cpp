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

void solve()
{
    int n;
    cin >> n;
    ll d;
    cin >> d;
    vector<ll> t(n);
    for(auto &u : t) cin >> u;
    bool found = false;
    for(int i = 0; i < n - 1; i++)
    {
        if(abs(t[i + 1] - t[i]) <= d)
        {
            cout << t[i + 1] << endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout << -1 << endl;
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
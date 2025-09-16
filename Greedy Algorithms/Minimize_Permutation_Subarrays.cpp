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
    vector<int> v(n + 1);
    int i1 = -1, i2 = -1, in = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if(v[i] == 1) i1 = i;
        if(v[i] == 2) i2 = i;
        if(v[i] == n) in = i;
    }
    if(in > i1 && in < i2 || in > i2 && in < i1)
    {
        cout << i1 << " " << i1 << endl;
    }
    else if(in > i1 && in > i2)
    {
        cout << max(i1, i2) << " " << in << endl;
    }
    else if(in < i1 && in < i2)
    {
        cout << in << " " << min(i1, i2) << endl;
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
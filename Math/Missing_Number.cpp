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
 
// Summation formula  
void solve()
{
    int n;
    cin >> n;
    ll tot_sum = 1LL * n * (n + 1) / 2;
    ll sum = 0;
    for(int i = 0; i < n - 1; i++)
    {
        int a; 
        cin >> a;
        sum += a;
    }
    cout << tot_sum - sum << endl;
}
// Traversing Formula
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     v.push_back(0);
//     for(int i = 1; i <= n - 1; i++)
//     {
//         int a;
//         cin >> a;
//         v.push_back(a);
//     }
//     sort(v.begin(), v.end());
//     for(int i = 1; i <= n; i++)
//     {
//         if(v[i] != i)
//         {
//             cout << i << endl;
//             break;
//         }
//     }  
// }
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

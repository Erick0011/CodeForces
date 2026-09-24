#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (auto &x : A) cin >> x;
    for (auto &x : B) cin >> x;
 
    vector<int> ma(2 * n + 1, 0), mb(2 * n + 1, 0);
 
    auto calc = [&](vector<int> &V, vector<int> &m)
    {
        int run = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && V[i] == V[i - 1]) run++;
            else run = 1;
            m[V[i]] = max(m[V[i]], run);
        }
    };
 
    calc(A, ma);
    calc(B, mb);
 
    int ans = 0;
    for (int v = 1; v <= 2 * n; v++)
        ans = max(ans, ma[v] + mb[v]);
 
    cout << ans << "
";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
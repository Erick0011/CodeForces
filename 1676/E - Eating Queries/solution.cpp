#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
 
#define linhasDeCaos ios_base::sync_with_stdio(false), cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define F first
#define S second
#define pb push_back
#define pp pop_back()
 
const ll MOD = 1000000007LL;
const ll INF = 4e18;
const int INF_INT = 1e9;
const double EPS = 1e-9;
 
int melhor = INF_INT;
 
int main()
{
    linhasDeCaos;
 
    int t;
    cin >> t;
 
    while (t--)
    {
        ll x, n;
        cin >> n >> x;
 
        vll c(n), sum(n);
 
        for (auto &i : c)
            cin >> i;
        sort(rall(c));
 
        sum[0] = c[0];
        for (int i = 1; i < n; i++)
        {
            sum[i] += sum[i - 1] + c[i];
        }
 
        // for (auto i : sum) cout << i << " ";
 
        while (x--)
        {
            ll q;
            cin >> q;
            if (q > sum[n - 1])
            {
                cout << -1 << "
";
            }
            else
            {
                auto it = std::lower_bound(all(sum), q);
                cout << (it - sum.begin()) + 1 << "
";
            }
        }
    }
 
    return 0;
}
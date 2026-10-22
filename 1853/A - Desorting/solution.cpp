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
 
const ll MOD = 1000000007LL;
const ll INF = 4e18;
const int INF_INT = 1e9;
const double EPS = 1e-9;
 
int main()
{
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        int bst = INF_INT;
        int a, d;
        cin >> v[0];
 
        for (int i = 1; i < n; i++)
        {
            cin >> v[i];
            if (v[i] - v[i - 1] < bst)
            {
                d = v[i];
                a = v[i - 1];
                bst = v[i] - v[i - 1];
            }
        }
 
        // cout << c << " " << a << " " << d << " " << bst << "
";
        if (bst == 0)
        {
            cout << 1 << "
";
        }
        else if (bst < 0)
        {
            cout << 0 << "
";
        }
        else
        {
 
            cout << (bst / 2) + 1 << "
";
        }
    }
}
 
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
    linhasDeCaos;
    int d, s, mn, mx, soma = 0;
    cin >> d >> s;
    vector<pii> hrs(d);
    vi res(d);
 
    for (int i = 0; i < d; i++)
    {
        cin >> mn >> mx;
        hrs[i].F = mn;
        hrs[i].S = mx;
        if (d > 1)
            res[i] = (mx + mn) / 2;
        else
            res[i] = mx;
        soma += res[i];
    }
    if (soma < s)
    {
        for (int i = 0; i < d; i++)
        {
            if (i == d)
                break;
            if (s - soma >= hrs[i].S - res[i])
            {
                soma += hrs[i].S - res[i];
                res[i] += hrs[i].S - res[i];
            }
        }
    }
    else
    {
        for (int i = 0; i < d; i++)
        {
            if (i == d)
                break;
            if (soma - s >= res[i] - hrs[i].F)
            {
                soma -= res[i] - hrs[i].F;
                res[i] -= res[i] - hrs[i].F;
            }
        }
    }
    if (soma == s)
    {
        cout << "YES
";
        for (auto r : res)
            cout
                << r << " ";
    }
    else
    {
        cout << "NO
";
    }
}
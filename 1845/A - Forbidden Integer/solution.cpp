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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
 
        if (x != 1)
        {
            cout << "YES
"
                 << n << "
";
            for (int i = 0; i < n; i++)
                cout << "1 ";
            cout << "
";
        }
        else if (k == 1)
        {
            cout << "NO
";
        }
        else if (k == 2)
        {
            if (n % 2 == 0)
            {
                cout << "YES
"
                     << n / 2 << "
";
                for (int i = 0; i < n / 2; i++)
                    cout << "2 ";
                cout << "
";
            }
            else
                cout << "NO
";
        }
        else // k >= 3
        {
            if (n % 2 == 0)
            {
                cout << "YES
"
                     << n / 2 << "
";
                for (int i = 0; i < n / 2; i++)
                    cout << "2 ";
                cout << "
";
            }
            else
            {
                cout << "YES
"
                     << 1 + (n - 3) / 2 << "
";
                cout << "3 ";
                for (int i = 0; i < (n - 3) / 2; i++)
                    cout << "2 ";
                cout << "
";
            }
        }
    }
}
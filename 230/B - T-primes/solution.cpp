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
#define NO cout << "NO
"
#define YES cout << "YES
"
 
const ll MOD = 1000000007LL;
const ll INF = 4e18;
const int INF_INT = 1e9;
const double EPS = 1e-9;
 
const int N = 1000006;
vector<bool> ehPrimo(N, true);
void crivo()
{
    ehPrimo[0] = ehPrimo[1] = false;
    for (ll i = 2; i * i < N; i++)
        if (ehPrimo[i])
            for (ll j = i * i; j < N; j += i)
                ehPrimo[j] =
                    false;
}
 
int main()
{
    linhasDeCaos;
    crivo();
    int n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        ll s = (ll)round(sqrt((double)x));
        if (s * s == x && ehPrimo[s])
            YES;
        else
            NO;
    }
}
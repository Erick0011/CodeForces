#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
 
#define linhasDeCaos ios_base::sync_with_stdio(false), cin.tie(NULL)
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
 
    int n, a, b, c, cont = 0;
    cin >> n;
 
    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {
            c = a ^ b;
            if (c <= n && b <= c && (a & b))
            {
                cont++;
            }
        }
    }
    cout << cont;
}
 
/*
1 < a < b < c < n logo a + b > c; triango non-dege**
a ^ b ^ c = 0 logo a ^ b = c ou c ^ b = a
*/
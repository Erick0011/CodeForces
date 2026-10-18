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
 
bool numero_repetido(int n)
{
    string s = to_string(n);
    set<char> vistos;
 
    vistos.insert(s[0]);
    vistos.insert(s[1]);
    vistos.insert(s[2]);
    vistos.insert(s[3]);
 
    return (sz(vistos) == 4 ? true : false);
}
 
int main()
{
    linhasDeCaos;
    int n;
    cin >> n;
    n++;
    while (!numero_repetido(n))
    {
        n++;
    }
    cout << n;
}
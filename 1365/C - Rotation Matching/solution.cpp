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
    int n;
    cin >> n;
 
    unordered_map<int, int> posA, posB;
    map<int, int> freq;
 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        posA[x] = i;
    }
 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        posB[x] = i;
    }
    for (int j = 1; j <= n; j++)
    {
        int moves = (posA[j] - posB[j] + n) % n;
        freq[moves]++;
    }
    int pair = 0;
 
    for (const auto &par : freq)
        pair = max(pair, par.S);
 
    cout << pair;
 
    /*
    for (const auto &[elemento, posicao] : posA)
    {
        std::cout << "Elemento: " << elemento << " -> Posicao: " << posicao << " ";
    }
    cout << "
";
    for (const auto &[elemento, posicao] : posB)
    {
        std::cout << "Elemento: " << elemento << " -> Posicao: " << posicao << " ";
    }
    cout << "
";
    */
}
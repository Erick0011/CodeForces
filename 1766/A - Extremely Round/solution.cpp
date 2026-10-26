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
    vector<bool>
        round(999999, false);
    vector<int> rounds(999999, 0);
 
    round[1] = true;
    round[2] = true;
    round[3] = true;
    round[4] = true;
    round[5] = true;
    round[6] = true;
    round[7] = true;
    round[8] = true;
    round[9] = true;
    round[10] = true;
    round[20] = true;
    round[30] = true;
    round[40] = true;
    round[50] = true;
    round[60] = true;
    round[70] = true;
    round[80] = true;
    round[90] = true;
    round[100] = true;
    round[200] = true;
    round[300] = true;
    round[400] = true;
    round[500] = true;
    round[600] = true;
    round[700] = true;
    round[800] = true;
    round[900] = true;
    round[1000] = true;
    round[2000] = true;
    round[3000] = true;
    round[4000] = true;
    round[5000] = true;
    round[6000] = true;
    round[7000] = true;
    round[8000] = true;
    round[9000] = true;
    round[10000] = true;
    round[20000] = true;
    round[30000] = true;
    round[40000] = true;
    round[50000] = true;
    round[60000] = true;
    round[70000] = true;
    round[80000] = true;
    round[90000] = true;
    round[100000] = true;
    round[200000] = true;
    round[300000] = true;
    round[400000] = true;
    round[500000] = true;
    round[600000] = true;
    round[700000] = true;
    round[800000] = true;
    round[900000] = true;
 
    for (int i = 1; i <= 999999; i++)
    {
        rounds[i] = rounds[i - 1] + round[i];
    }
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        cout << rounds[n] << "
";
    }
}
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
 
    string s;
    int best = 1, cont = 1;
    cin >> s;
    for(int i = 1; i < sz(s); i++){
        if(s[i - 1] == s[i]){
            cont++;
        }else{
            cont = 1;
        }
 
        best = max(best, cont);
    }
 
    cout << (best >= 7 ? "YES" : "NO");
 
    
 
    
    return 0;
}
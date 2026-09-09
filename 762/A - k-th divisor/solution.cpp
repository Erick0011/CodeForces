#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
#define pb push_back
 
int main()
{
 
    ll n, k;
    cin >> n >> k;
    vector<ll> div;
 
    if (k > n)
    {
        cout << -1;
        return 0;
    }
 
    vector<ll> pequenos, grandes;
 
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.pb(i);
            if (i != n / i)
            {
                div.pb(n / i);
            }
        }
    }
 
    sort(div.begin(), div.end());
    if (div.size() >= k)
    {
        cout << div[k - 1];
    }
    else
    {
        cout << -1;
    }
}
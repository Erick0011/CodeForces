#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int n, total, pego, moedas;
 
    cin >> n;
    vector<int> v(n);
    while (n--)
    {
        cin >> v[n];
    }
    sort(v.begin(), v.end(), greater<int>());
    total = accumulate(v.begin(), v.end(), 0);
    moedas = pego = 0;
    for (int i = 0; i < v.size(); i++)
    {
        pego = pego + v[i];
        // pego = accumulate(v.begin() + i, v.end(), 0);
 
        moedas += 1;
        if (total - pego < pego)
        {
            break;
        }
    }
    cout << moedas;
}
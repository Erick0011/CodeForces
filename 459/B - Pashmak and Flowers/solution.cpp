#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    long long total = 0;
    cin >> n;
    vector<long long> v(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
 
    long long dif = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
    long long contagem_min = 0, contagem_max = 0;
    long long minVal = *min_element(v.begin(), v.end());
    long long maxVal = *max_element(v.begin(), v.end());
    long long total_pares_iguais = 0;
 
    if (dif != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] == minVal)
                contagem_min++;
            if (v[i] == maxVal)
                contagem_max++;
        }
        total_pares_iguais = contagem_min * contagem_max;
    }
    else
    {
        total_pares_iguais = (long long)n * (n - 1) / 2;
    }
 
    cout << dif << " " << total_pares_iguais;
}
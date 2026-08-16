#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int n, x;
    cin >> n >> x;
 
    vector<int> books(n), s(n + 1);
 
    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
    }
 
    int esq = 0;
    int melhor = 0;
    long long soma = 0;
 
    for (int dir = 0; dir < n; dir++)
    {
 
        soma += books[dir];
 
        while (soma > x)
        {
            soma -= books[esq];
            esq++;
        }
 
        melhor = max(melhor, dir - esq + 1);
    }
    cout << melhor;
}
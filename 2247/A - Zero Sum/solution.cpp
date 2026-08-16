#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int soma = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            soma += x;
        }
 
        if (soma % 4 == 0)
            cout << "YES" << "
";
        else
            cout << "NO" << "
";
    }
}
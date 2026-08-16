#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int a, b, t;
 
    cin >> t;
 
    while (t--)
    {
 
        cin >> a >> b;
 
        long long x = abs(a - b);
 
        long long resultado = (x + 10 - 1) / 10;
 
        cout << resultado << "
";
    }
}
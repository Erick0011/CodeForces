#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int cont = 0;
        int moves = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                cont++;
            }
            else
            {
                cont--;
            }
            if (cont < 0)
            {
                moves++;
                cont = 0;
            }
        }
        cout << moves << "
";
    }
}
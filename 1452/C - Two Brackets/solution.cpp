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
 
        string s;
        cin >> s;
 
        int AD = 0;
        int AC = 0;
        int par = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                AC++;
            }
            else if (s[i] == ')')
            {
                if (AC > 0)
                {
                    par++;
                    AC--;
                }
            }
            if (s[i] == '[')
            {
                AD++;
            }
            else if (s[i] == ']')
            {
                if (AD > 0)
                {
                    par++;
                    AD--;
                }
            }
        }
        cout << par << "
";
    }
}
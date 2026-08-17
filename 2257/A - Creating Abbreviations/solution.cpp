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
        int n, m;
        cin >> n >> m;
 
        bool disponivel[26] = {false};
 
        for (int i = 0; i < n; i++)
        {
            string w;
            cin >> w;
            disponivel[w[0] - 'a'] = true;
        }
 
        vector<string> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];
 
        vector<set<int>> letrasNecessarias(m);
        vector<int> faltam(m);
        vector<vector<int>> quemPrecisa(26);
        vector<bool> criada(m, false);
 
        for (int i = 0; i < m; i++)
        {
            set<int> letras;
            for (char c : a[i])
                letras.insert(tolower(c) - 'a');
            letrasNecessarias[i] = letras;
        }
 
        queue<int> fila;
 
        for (int i = 0; i < m; i++)
        {
            int cnt = 0;
            for (int l : letrasNecessarias[i])
            {
                if (!disponivel[l])
                {
                    cnt++;
                    quemPrecisa[l].push_back(i);
                }
            }
            faltam[i] = cnt;
            if (cnt == 0)
                criada[i] = true;
        }
 
        for (int l = 0; l < 26; l++)
            if (disponivel[l])
                fila.push(l);
 
        for (int i = 0; i < m; i++)
        {
            if (criada[i])
            {
                int primeira = tolower(a[i][0]) - 'a';
                if (!disponivel[primeira])
                {
                    disponivel[primeira] = true;
                    fila.push(primeira);
                }
            }
        }
 
        while (!fila.empty())
        {
            int c = fila.front();
            fila.pop();
            for (int i : quemPrecisa[c])
            {
                if (criada[i])
                    continue;
                faltam[i]--;
                if (faltam[i] == 0)
                {
                    criada[i] = true;
                    int primeira = tolower(a[i][0]) - 'a';
                    if (!disponivel[primeira])
                    {
                        disponivel[primeira] = true;
                        fila.push(primeira);
                    }
                }
            }
        }
 
        bool ok = true;
        for (int i = 0; i < m; i++)
            if (!criada[i])
                ok = false;
 
        cout << (ok ? "YES" : "NO") << "
";
    }
 
    return 0;
}
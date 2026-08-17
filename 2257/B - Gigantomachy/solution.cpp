#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        vector<ll> a(n + 2), b(m + 2);
        for (int i = 1; i <= n; i++)
            scanf("%lld", &a[i]);
        for (int i = 1; i <= m; i++)
            scanf("%lld", &b[i]);
 
        int i = 1, j = 1;
        ll ha = a[1], hb = b[1];
        bool turnBea = true;
        int winner = 0;
 
        while (true)
        {
            ll hP, hQ, nextP = -1, nextQ = -1;
            bool P_isBea = turnBea;
            bool Plast, Qlast;
 
            if (turnBea)
            {
                hP = ha;
                if (i < n)
                    nextP = a[i + 1];
                hQ = hb;
                if (j < m)
                    nextQ = b[j + 1];
                Plast = (i == n);
                Qlast = (j == m);
            }
            else
            {
                hP = hb;
                if (j < m)
                    nextP = b[j + 1];
                hQ = ha;
                if (i < n)
                    nextQ = a[i + 1];
                Plast = (j == m);
                Qlast = (i == n);
            }
 
            ll kP;
            bool Ploss;
            if (Plast)
            {
                Ploss = true;
                kP = hP;
            }
            else
            {
                Ploss = false;
                kP = max(0LL, hP - nextP + 1);
            }
 
            ll kQ;
            bool Qloss;
            if (Qlast)
            {
                Qloss = true;
                kQ = hQ - 1;
            }
            else
            {
                Qloss = false;
                kQ = max(0LL, hQ - nextQ);
            }
 
            ll posP = 2 * kP;
            ll posQ = 2 * kQ + 1;
 
            if (posP <= posQ)
            {
                if (Ploss)
                {
                    winner = P_isBea ? 2 : 1;
                    break;
                }
                else
                {
                    ll newHQ = hQ - (kP + 1);
                    if (P_isBea)
                    {
                        i += 1;
                        ha = a[i];
                        hb = newHQ;
                        turnBea = false;
                    }
                    else
                    {
                        j += 1;
                        hb = b[j];
                        ha = newHQ;
                        turnBea = true;
                    }
                }
            }
            else
            {
                if (Qloss)
                {
                    winner = P_isBea ? 1 : 2;
                    break;
                }
                else
                {
                    ll newHP = hP - (kQ + 1);
                    if (P_isBea)
                    {
                        j += 1;
                        hb = b[j];
                        ha = newHP;
                        turnBea = true;
                    }
                    else
                    {
                        i += 1;
                        ha = a[i];
                        hb = newHP;
                        turnBea = false;
                    }
                }
            }
        }
 
        printf("%d
", winner);
    }
}
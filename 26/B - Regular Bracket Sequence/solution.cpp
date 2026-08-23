#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >> s;
 
    int Acont = 0;
    int Fcont = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '('){
            Acont++;
        }
        else{
            if(Acont > 0){
                Acont--;
            }else{
                Fcont++;
            }
        }
    }
    cout << s.size() - (Acont + Fcont) << "
";
}
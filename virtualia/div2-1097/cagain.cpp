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
        string a;
        string b;
        cin >> a >> b;
        int scorea = 0;
        int scoreb = 0;
        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            char one = a[i];
            char two = b[i];
            if (one == two)
            {
                if (one == '(')
                {
                    scorea++;
                    scoreb++;
                }
                else
                {
                    scorea--;
                    scoreb--;
                }

            }
            else
            {
                if (scorea < scoreb)
                {
                    scorea++;
                    scoreb--;
                }
                else
                {
                    scorea--;
                    scoreb++;
                }
            }
            if (scorea < 0 || scoreb < 0)
            {
                cout << "NO" << endl;
                possible = false;
                break;
            }
            


        }
        if (scorea == 0 && scoreb == 0)
        {
            cout << "YES" << endl;
        }
        else if (possible == true)
        {
            cout << "NO" << endl;
        }


    }
}
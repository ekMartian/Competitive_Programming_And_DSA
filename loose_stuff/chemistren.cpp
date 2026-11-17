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
        int k;
        cin >> k;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int paircount = 0;
        int lonecount = 0;

        // for (int i = 1; i < n; i++)
        // {
        //     if (s[i] == s[i-1])
        //     {
        //         paircount++;
        //         i++;

        //     }
        //     else
        //     {
        //         if (i == n-1)
        //         {
        //             lonecount+=2;
        //         }
        //         else
        //         {
        //             lonecount++;

        //         }
                
        //     }
        // }
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i-1])
            {
                paircount++;
                i++;
                if (i == n-1)
                {
                    lonecount++;
                }

            }
            else
            {
                if (i == n-1)
                {
                    lonecount+=2;
                }
                else
                {
                    lonecount++;

                }
                
            }
        }
        if ((k & 1) == 0)
        {
            if ((lonecount & 1) == 0)
            {
                if (k >= lonecount)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                if (k + 1 >= lonecount)
                {
                    cout << "yes" << endl;

                }
                else
                {
                    cout << "no" << endl;
                }
            }


        }
        else
        {
            if (k+1 >= lonecount)
            {
                cout  << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

        }
        // cout << paircount << " " << lonecount << endl;
        // cout <
        // < paircount << " " << lonecount << endl;


    }
}

// counting logic all edeg caeses, elements on edge, and alo like, th eplus plus logic fo i miss anytihg i romsehintg, liek the bug i irroved for abccd, the old countllogic rails ther.e 
// debuggin by proitintng eery value


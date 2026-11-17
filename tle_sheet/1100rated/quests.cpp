#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector <int> as;
        vector <int> bs;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            as.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            bs.push_back(b);
        }
        vector <int> distances;
        // int at = as[0];
        bool flag = true;
        int key = 0;
        // int at = as[key];
        for (int i = 0; i < 2*n; i++)
        {
            int here = 0;
            int done = 0;

            if (flag == true)
            {
                int target = bs[key];
                int at = 0;
                // here+=as[0];
                while (at <= target)
                {
                    done++;
                    here+=as[at];
                    at++;

                }
                at--;
                while (done < k)
                {
                    here+=bs[at];
                }
                distances.push_back(here);
                flag = false;


            }
            else if (flag == false)
            {
                int target = as[key];
                int at = 0;
                // here+=as[0];
                while (at <= target)
                {
                    done++;
                    here+=as[at];
                    at++;

                }
                at--;
                while (done < k)
                {
                    here+=as[at];
                }
                distances.push_back(here);
                flag = true;
                key++;


            }



        }
        
        for (int i = 0; i < n; i++)
        {
            int subject = bs[i];




        }
    }
}
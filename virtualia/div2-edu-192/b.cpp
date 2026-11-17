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
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);

        }
        vector <int> ones;
        int countofone = 0;
        vector <int> twos;
        int countoftwo = 0;

        for (int i = 0; i < n; i++)
        {
            int a = arr[i];
            if (a == 1)
            {
                countofone++;
            }
            else if (a == 2)
            {
                countoftwo++;
            }
            ones.push_back(countofone);
            twos.push_back(countoftwo);



        }
        int latest = 0;
        int ourside = 0;
        bool doing = false;
        bool is = false;
        for (int i = 0; i < n; i++)
        {
            if (doing == false)
            {
                ourside = ones[i];
                if (2*ourside >= i+1)
                {
                    doing = true;
                }
                else
                {
                    latest = i;
                }
                
            }
            else if (doing == true)
            {
                ourside = ones[i] + twos[i];
                ourside = ourside - ones[latest] - twos[latest];
                if (2* ourside >= i+1-latest-1)
                {
                    if (i < n-1)
                    {
                        is = true;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
           
        }
        if (is == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        
        
    }
}
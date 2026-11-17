#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        string b;
        cin >> b;
        vector <string> tocheck;
        tocheck.push_back("");
        vector <string> tocheckb;
        tocheckb.push_back("");
        int n = 20;
        for (int i = 1; i <= a.size(); i++)
        {
            int l = i;
            for (int j = 0; j <= a.size() - l; j++)
            {
                string segment = a.substr(j, l);
                tocheck.push_back(segment);


            }


        }
        for (int i = 1; i <= b.size(); i++)
        {
            int l = i;
            for (int j = 0; j <= b.size()-l; j++)
            {
                string segment = b.substr(j, l);
                tocheckb.push_back(segment);


            }


        }
        vector <string> commons;
        int m = tocheck.size();
        int o = tocheckb.size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < o; j++)
            {
                if (tocheck[i] == tocheckb[j])
                {
                    commons.push_back(tocheck[i]);

                }
            }
            
        }

        sort(commons.begin(), commons.end());
        reverse(commons.begin(), commons.end());
        int k = 0;
        for (int i = 0; i < commons.size(); i++)
        {
            k = max(k, static_cast<int>(commons[i].size()));
        }
        cout << a.size() + b.size() - k*2 << endl;
        
    }
}
//(int) or static cast
// static_cast<int>(thingy)
// size returns somehting else, not int, it returns It is a "bruh" moment, honestly. You’d think the most basic property of a container would be a simple int, but C++ is obsessed with portability and safety, which is why .size() returns a size_t (or unsigned long long on most 64-bit systems).
// i copy pasted gemini output up top, i will improve this. 
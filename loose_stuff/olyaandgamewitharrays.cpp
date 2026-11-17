#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <vector <int> > arr;
        vector <int> numberof;
        vector <int> minimas;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            numberof.push_back(m);
            vector<int> inside;
            for (int j = 0; j < m; j++)
            {
                int a;
                cin >> a;
                inside.push_back(a);

            
            }
            sort(inside.begin(), inside.end());
            arr.push_back(inside);
            minimas.push_back(inside[0]);
        }
        int minimum = INT_MAX;
        int minimumretainer = minimum;
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            minimumretainer = minimum;
            minimum = min(minimum, arr[i][0]);
            if (minimumretainer != minimum)
            {
                index = i;
            }
            else
            {
                continue;
            }
        }
        int mvalue = numberof[index];
        int i = 1;
        while (i < mvalue)
        {
            int checking = arr[index][i];
            for (int j = 0; j < n; j++)
            {
                if (j != index)
                {
                    if (minimas[j] < checking)
                    {

                        i++;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            // for (int j = 0; j < index[j])

        }

        // int m;
        // cin >> m;
        
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        vector <int> mark(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= k)
            {
                mark[i] = 1;
            }
            
        }
        int countofone = 0;
        int countofzero = 0;
        int count = 0;

        for (int i = 0; i < n-2; i++)
        {
            if (mark[i] == 1)
            {
                countofone++:
                count++;
            }
            else
            {
                countofzero++;
                count++;
            }
            if (count % 2 == 0)
            {
                

            }

        }
    }

}
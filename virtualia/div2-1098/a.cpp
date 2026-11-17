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
        int count = 0;
        int onecount = 0;
        int twocount = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            a = a%3;
            if (a == 0)
            {
                count++;
            }
            else if (a == 1)
            {
                onecount++;
            }
            else 
            {
                twocount++;
            }
            
        }
        if (onecount >= twocount)
        {
            count = count + twocount;
            onecount = onecount - twocount;
            count = count + onecount/3;

        }
        else
        {
            count = count + onecount;
            twocount = twocount - onecount;
            count = count + twocount/3;
        }
        cout << count << endl;

    }
}
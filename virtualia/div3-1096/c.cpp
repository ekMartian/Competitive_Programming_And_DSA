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
        vector <int> threes;
        vector <int> twos;
        vector <int> others;
        vector <int> sixes;
        int threecount = 0;
        int twocount = 0;
        int othercount = 0;
        int sixcount = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            a = arr[i];
            if (a % 3 == 0 && a % 6 != 0)
            {
                threes.push_back(a);
                threecount++;
            }
            else if (a % 2 == 0 && a % 6 != 0)
            {
                twos.push_back(a);
                twocount++;
            }
            else if (a % 6 == 0)
            {
                sixes.push_back(a);
                sixcount++;
            }
            else
            {
                others.push_back(a);
                othercount++;
            }
        }
        for (int i = 0; i < sixcount; i++)
        {
            cout << sixes[i] << " ";
        }
        for (int i = 0; i < threecount; i++)
        {
            cout << threes[i] << " ";
        }
        for (int i = 0; i < othercount; i++)
        {
            cout << others[i] << " ";
        }
        for (int i = 0; i < twocount; i++)
        {
            cout << twos[i] << " ";
        }
        cout << endl;
    }
}

// al 2s one way, all 3s one way, because then like yeah you know like right. 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, c;
        cin >> n >> c;
        vector <long long int> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            long long int b = a + i + 1;
            arr.push_back(b);
        }
        long long int current = 0;
        long long int count = 0;
        sort(arr.begin(), arr.end());
        int i = 0;
        while (current < c && i < n)
        {
            current+=arr[i];
            i++;
            if (current <= c)
            {
                count++;
            }

        }
        cout << count << endl;
    }
}

//boiunds checking 

// run time error, ounds checking, see if i am aceeding anythign, lok at al the conditions. always temrinated at th4e end of rray. 
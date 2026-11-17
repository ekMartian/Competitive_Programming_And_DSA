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
        vector <int> arr(n, 1);
        for (int i = 0; i < n; i++)
        {
            int factor = i+1;

            for (int j = i; j < n; j+=factor)
            {
                if (arr[j] % factor != 0)
                {
                    arr[j] = arr[j] * factor;

                }
                
            }

        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
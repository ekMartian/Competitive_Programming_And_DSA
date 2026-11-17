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
        vector <int> arr(3*n, 0);
        vector <int> ref(3*n, 0);
        for (int i = 0; i < 3*n; i++)
        {
            ref[i] = i+1;
        }
        int at = 0;
        for (int i = 0; i < 3*n; i+=3)
        {
            arr[i] = ref[at];
            at++;
        }
        int i = 1;
        while (i < 3*n)
        {
            arr[i] = ref[at];
            i++;
            at++;
            arr[i] = ref[at];
            i+=2;
            at++;
        }
        for (int i = 0; i < 3*n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
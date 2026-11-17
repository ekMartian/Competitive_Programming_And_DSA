#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <long long int> arr;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        arr.push_back(a);


    }
    vector <long long int> sortedarr;
    for (int i = 0; i < n; i++)
    {
        sortedarr.push_back(arr[i]);
    }
    sort(sortedarr.begin(), sortedarr.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != sortedarr[i])
        {
            count++;
        }
    }
    if (count <= 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
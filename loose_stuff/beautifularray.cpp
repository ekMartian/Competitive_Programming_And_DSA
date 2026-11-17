#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<int> arr;
        // int 
        if (n%b == 0)
        {
            int base = n/b;
            for (int i = 0; i < n; i++)
            {
                arr.push_back(base);
            }
            // int toadd = s - b;
            if (s < b)
            {
                cout << -1 << endl;
            }
            else
            {
                int toaddfirst = (s-b)/n;
                for (int j = 0; j < n; j++)
                {
                    arr[j]+=toaddfirst; 
                }
                int toaddsecond = (s-b)% n;
                int ind = 0;
                while (toaddsecond > 0)
                {
                    arr[ind]+=1;
                    toaddsecond--;

                    if (ind == n-1)
                    {
                        ind = 0;
                    }
                    else
                    {
                        ind++;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                arr.push_back(n/b);
            }
            int rem = n%b;
            int index = 0;
            while (rem > 0)
            {
                arr[index]+=1;
                rem--;

                if (index < n-1)
                {
                    index++;
                }
                else
                {
                    index = 0;
                }
            }
            int toadd = s - b;
            if (s < b)
            {
                cout << -1 << endl;
            }
            else
            {
                int ind = index;
                while (toadd > 0)
                {
                    arr[ind]+=1;
                    toadd--;

                    if (ind == n-1)
                    {
                        ind = 0;
                    }
                    else
                    {
                        ind++;
                    }
                }
            }
            // [

            // ]
        }
        // [

        // ]
    }
}
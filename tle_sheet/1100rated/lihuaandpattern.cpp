#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> base;
        vector<vector<int>> todo;
        // int partition;
        // if (n % 2 == 0)
        // {
        //     partition = n/2;

        // }
        // else
        // {
        //     partition = n/2 + 1;
        // }
        for (int i = 0; i < n; i++)
        {
            vector <int> row;
            for (int j = 0; j < n; j++)
            {
                int a;
                cin >> a;
                row.push_back(a);

            }
            base.push_back(row);



        }
        int count = 0;
        for (int i = 0; i < n/2; i++)
        {
            // vector <int> row;
            for (int j = 0; j < n; j++)
            {
                int a;
                a = base[i][j];
                {
                    if (a != base[n-i-1][n-j-1])
                    {
                        count++;
                    }
                }

            }
            // base.push_back(row);



        }
        if (n % 2 != 0)
        {
            vector <int> middle = base[n/2];
            for (int i = 0; i < n/2; i++)
            {
                if (middle[i] != middle[n-1-i])
                {
                    count++;
                }
            }
        }
        // reverse(base.begin(), base.end());
        // int count = 0;
        // for (int i = 0; i < n/2; i++)
        // {
        //     vector <int> row;
        //     for (int j = 0;j < n; j++)
        //     {
        //         int a;
        //         cin >> a;
        //         row.push_back(a);
        //         if (a != base[i][j])
        //         {
        //             count++;
        //         }
                

        //     }
        //     todo.push_back(row);




        // }
        int diff = count - k;
        if (n % 2 != 0)
        {
            if (count <= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            
        }
        else
        {
            if (diff % 2 == 0)
            {
                cout << "YES" << endl;
            }   
            else
            {
                cout << "NO" << endl;
            }

        }
        if (diff % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
}

// direct access for vector<vector<int>>

// return rretursn evrything!1

// also check for number of test cases. 

// that is also something

// number of t4st cases this guy is dig4sting,  check thqt if eeyrtiung seems fine, ro ksu tchekc that nayway. 
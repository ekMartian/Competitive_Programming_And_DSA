#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector <vector<int>>grid;
        vector <vector<int>>othergrid;
        vector <int> rowsums;
        vector <int> otherrowsums;
        vector <int> columnsums;
        vector <int> othercolumnsums;
        for (int i = 0; i < n; i++)
        {
            vector <int> row;
            string s;
            cin >> s;
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                int a;
                a = s[j] - '0';
                row.push_back(a);
                sum+=a;

            }
            grid.push_back(row);
            rowsums.push_back(sum%3);
        }
        for (int i = 0; i < n; i++)
        {
            vector <int> row;
            string s;
            cin >> s;;
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                int a;
                a = s[j] - '0';
                row.push_back(a);
                sum+=a;

            }
            othergrid.push_back(row);
            otherrowsums.push_back(sum%3);
        }
       
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum+=grid[i][j];

            }
            columnsums.push_back(sum%3);

        }
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum+=othergrid[i][j];

            }
            othercolumnsums.push_back(sum%3);

        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (rowsums[i] == otherrowsums[i])
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }

        }
        if (flag == true)
        {
            for (int j = 0; j < m; j++)
            {
                if (columnsums[j] == othercolumnsums[j])
                {
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }

}

//invariant, correct path 
// check sums, etc
/// comn
//cmon*
//you got this
//took help from ai for this question (virtual contest, practiivng only).
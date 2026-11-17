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
        string s;
        cin >> s;
        vector <char> arr;
        arr.push_back('0');
        for (int i = 0; i < n; i++)
        {
            // int a;
            // cin >> a;
            
            arr.push_back(s[i]);
        }
        int count = 0;
        int counterer = 0;
        int initial = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == arr[i-1])
            {
                count++;
            }
            else
            {
                count+=2;
            }
        }
        // for (int i = 0; i < )
        // {

        // }
        if (arr[1] == '0')
        {
            bool checker = false;
            int storer;
            int counter = 0;
            bool storerer = false;
            bool storererer = false;
            for (int i = 2; i <= n; i++)
            {
                if (arr[i] == '1')
                {
                    checker = true;
                    storer = i;
                    break;
                }
            }
            if (checker == true)
            {
                for (int i = storer; i <= n; i++)
                {
                    if (arr[i] == '0')
                    {
                        storerer = true;
                        counter++;

                    }
                    else if (storerer == true && arr[i] == '1')
                    {
                        storererer = true;
                        counter++;
                    }
                    // else if (storererer == true & arr[i] == '0')
                    // {
                    //     counter++;
                    //     break;
                    // }
                }

            }
            counterer = counter;
            

        }
        else if (arr[1] == '1')
        {
            bool checker = false;
            int storer;
            bool storerer = false;
            int counter = 0;
            for (int i = 2; i <= n; i++)
            {
                if (arr[i] == '0')
                {
                    checker = true;
                    storer = i;
                    counter++;
                    break;
                }
            }
            if (checker == true)
            {
                for (int i = storer; i <= n; i++)
                {
                    if (arr[i] == '1')
                    {
                        storerer = true;
                    }
                    else if (storerer == true && arr[i] == '0')
                    {
                        counter++;
                        break;
                    }
                }
            }
            counterer = counter;
        }
        // cout << count << endl;
        cout << count - counterer << endl;
        // if (arr[0] == 1)
        // {
        //     bool found = false;
        //     int storer;
        //     for (int i = 0; i < n; i++)
        //     {
        //         if (arr[i] == 0)
        //         {
        //             found = true;
        //             storer = i;
        //             break;
        //         }
                
        //     }
        //     if (found == true)
        //     {
        //         for (int i = storer; i < n; i++)
        //         {
        //             if (arr[i] == 0)

        //         }

        //     }
        // }
        // if (arr[0] == 0)
        // {
        //     bool found = false;
        //     for (int i = 1; i < n; i++)
        //     {
        //         if ()
        //     }
        // }

    }
}
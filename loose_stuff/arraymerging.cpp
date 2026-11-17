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
        vector <int> arra;
        vector <int> arrb;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arra.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            arrb.push_back(b);
        }
        int maximum = 1;
        int count = 1;
        bool flag = false;
        int theone;
        int thearr;
        for (int i = 1; i < n; i++)
        {
            if (arra[i] == arra[i-1] && flag == false)
            {
                count = 2;
                flag == true;
                maximum = max(count, maximum);
                if (maximum == count)
                {
                    theone = arra[i];
                    thearr = 1;

                }


            }
            else if (arra[i] == arra[i-1] && flag == true)
            {
                count++;
                maximum = max(maximum, count);
                if (maximum == count)
                {
                    theone = arra[i];
                    thearr = 1;

                }
            }
            else if (flag == true && arra[i] != arra[i-1])
            {
                count = 1;
                maximum = max(count, maximum);
                if (maximum == count)
                {
                    theone = arra[i];
                    thearr = 1;

                }
            }
        // )
        //     {

        //     }
        }
        count = 1;
        flag = false;
        for (int i = 1; i < n; i++)
        {
            if (arrb[i] == arrb[i-1] && flag == false)
            {
                count = 2;
                flag == true;
                maximum = max(count, maximum);
                if (maximum == count)
                {
                    theone = arrb[i];
                    thearr = 2;

                }

            }
            else if (arrb[i] == arrb[i-1] && flag == true)
            {
                count++;
                maximum = max(maximum, count);
                if (maximum == count)
                {
                    theone = arrb[i];
                    thearr = 2;

                }
            }
            else if (flag == true && arrb[i] != arrb[i-1])
            {
                count = 1;
                maximum = max(count, maximum);
                if (maximum == count)
                {
                    theone = arrb[i];
                    thearr = 2;

                }
            }
            
        // )
        //     {

        //     }
        }
        if (thearr == 1)
        {
            bool flag = true;
            int maxhere = 0;
            int count = 0;

            for (int i = 0; i < n; i++)
            {
                if (arrb[i] == theone && flag == false)
                {
                    count = 1;
                    maxhere= max(count, maxhere);
                    flag = true;
                }
                else if (arrb[i] == theone && flag == true)
                {
                    count++;
                    maxhere= max(count, maxhere);

                }
                else
                {
                    count = 0;
                    flag = false;
                }
            }
            cout << maximum + maxhere << endl;
        }
        else
        {
            bool flag = true;
            int maxhere = 0;
            int count = 0;

            for (int i = 0; i < n; i++)
            {
                if (arra[i] == theone && flag == false)
                {
                    count = 1;
                    maxhere= max(count, maxhere);
                    flag = true;
                }
                else if (arra[i] == theone && flag == true)
                {
                    count++;
                    maxhere= max(count, maxhere);

                }
                else
                {
                    count = 0;
                    flag = false;
                }
            }
            cout << maximum + maxhere << endl;
        }
    }
}
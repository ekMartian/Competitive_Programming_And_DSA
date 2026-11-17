#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
    int n;
    std::cin>>n;
    std::vector<long long int> arr;
    std::vector<long long int> sortedarr;
    for (int i = 0; i < n; i++)
    {
        long long a;
        std::cin >> a;
        arr.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        sortedarr.push_back(arr[i]);
    }
    std::sort(sortedarr.begin(), sortedarr.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (sortedarr[i] != arr[i])
        {
            count++;
        }
    }
    if (count <= 2)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}
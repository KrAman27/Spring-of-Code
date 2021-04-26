#include <bits/stdc++.h>
using namespace std;

int number(int a, int k)
{
    int dig = 0;

    while (a)
    {
        int rem = a % 10;
        if (rem == k)
        {
            dig++;
        }
        a = a / 10;
    }
    return dig;
}

void sorting_func(int arr[], int n)
{
    multimap<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m.insert(pair<int, int>(number(arr[i], 6), arr[i]));
    }

    int i = 0;
    for (auto x : m)
    {
        arr[i] = x.second;
        i++;
    }
}

int main()
{
    int arr[] = {15, 66, 26, 91};
    int n = sizeof(arr) / sizeof(int);

    sorting_func(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
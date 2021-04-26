#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    if (a % 2 == 1)
    {
        if (b % 2 == 1)
        {
            return a > b;
        }
        else
        {
            return true;
        }
    }
    else
    {
        if (b % 2 == 1)
        {
            return false;
        }
        else
        {
            return a < b;
        }
    }
}

void method_1(int arr[], int n)
{
    //sort the array with the following comparator
    // 1. if both the elements are odd, sort in descending order
    // 2. if both the elements are even, sort in ascending order
    // 3. if the first element is even and second is odd, wrong condition so false
    // 4. if the first element is odd and second is even, right condition so true
    sort(arr, arr + n, compare);
}

void method_2(int arr[], int n)
{
    // 1. first make all the odd numbers negative
    // 2. then sort the array
    // 3. then make all the negative elements positive
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            arr[i] *= -1;
        }
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] *= -1;
        }
    }
}

void method_3(int arr[], int n)
{
    // 1. Use two pointer approach to move all the odd elements at the left position and all the even elements in the right
    // 2. Sort individually odd and even parts of the array
    int low = 0;
    int right = n - 1;

    while (low <= right)
    {
        if (arr[low] % 2 == 1)
        {
            if (arr[right] % 2 == 0)
            {
                low++;
                right--;
            }
            else
            {
                low++;
            }
        }
        else
        {
            if (arr[right] % 2 == 0)
            {
                right--;
            }
            else
            {
                swap(arr[low], arr[right]);
                low++;
                right--;
            }
        }
    }

    sort(arr, arr + low, greater<int>());

    sort(arr + low, arr + n);
}

int main()
{
    int arr[] = {1, 2, 3, 5, 4, 7, 10};
    int n = sizeof(arr) / sizeof(int);

    method_3(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
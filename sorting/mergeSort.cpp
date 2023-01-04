#include <bits/stdc++.h>

using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i = l;
    int j = m + 1;
    int k = l;
    int arr2[1000];

    while (i <= m && j <= r)
    {
        if (arr[i] < arr[j])
        {
            arr2[k++] = arr[i++];
        }
        else
        {
            arr2[k++] = arr[j++];
        }
    }

    for (; i <= m; i++)
    {
        arr2[k++] = arr[i];
    }

    for (; j <= r; j++)
    {
        arr2[k++] = arr[j];
    }

    for (int i = l; i <= r; i++)
    {
        arr[i] = arr2[i];
    }
}
void merge_sort(int arr[], int l, int r)
{

    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {15, 26, 97, 45, 10, 7, 87, 239, 1};
    int n = 9;
    cout << "Before merge sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    merge_sort(arr, 0, n - 1);
    cout << "After merge sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
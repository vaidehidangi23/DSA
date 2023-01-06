#include <bits/stdc++.h>

using namespace std;

int print2largest(int arr[], int n)
{
    // code here

    int a = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > a)
        {
            a = arr[i];
        }
    }
    // cout<<a<<endl;
    int b = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > b && arr[i] != a)
        {
            b = arr[i];
        }
    }
    return b;
}
int main()
{
    int arr[] = {2, 5, 1, 7, 0};
    int n = 5;
    int max = print2largest(arr, n);
    cout << "The second largest element in the array is: " << max << endl;
}

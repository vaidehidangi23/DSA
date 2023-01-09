#include <bits/stdc++.h>

using namespace std;

int rotate(int a[], int n)
{

    int temp = a[0];
    for (int i = 0; i < n-1; i++)
    {
        a[i] = a[i + 1];
    }
    a[n-1]=temp;
    


}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 7, 7, 10};
    int n = 8;
    rotate(arr, n);
    cout << "The array after left rotaing it by one place " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
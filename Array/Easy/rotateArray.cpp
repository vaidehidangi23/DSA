#include <bits/stdc++.h>

using namespace std;

int rotate(int arr[], int k, int n)
{
k=k%n;
	   int temp[k];
	   for(int i=0;i<k;i++){
	       temp[i]=arr[i];
	   }
	   
	   for(int i=0;i<(n-k);i++){
	       arr[i]=arr[i+k];
	       
	   }
	   for(int i=n-k;i<n;i++){
	       arr[i]=temp[i-n+k];
	   }
	   
	   
    


}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 10};
    int n = 8;
    int k=2;
    rotate(arr, k, n);
    cout << "The array after left rotaing it " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
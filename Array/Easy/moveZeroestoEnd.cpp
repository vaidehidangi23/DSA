#include <bits/stdc++.h>

using namespace std;

void pushZerosToEnd(int arr[], int n) {
	    // code here
	   // int temp[n];
	   // int k=0;
	   // for(int i=0;i<n;i++){
	   //   if(arr[i] != 0){
	   //       temp[k]=arr[i];
	   //       k++;
	   //   }  
	   // }
	   // for(int i=k;i<n;i++){
	   //     temp[i]=0;
	   // }
	   // for(int i=0;i<n;i++){
	   //     arr[i]=temp[i];
	   // }
	   int j=0;
        
        for(int i=0;i<n;i++){
            if(arr[i] != 0){
                swap(arr[j],arr[i]);
                j++;
            }
        }
	}
int main()
{
    int arr[] = {1, 2, 0, 3, 0, 7, 0, 10};
    int n = 8;
    pushZerosToEnd(arr, n);
    cout << "The array after moving all the zeroes to end " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}



#include<bits/stdc++.h>

using namespace std;
void bubble_sort(int arr[], int n) {
  
  for (int i=0;i<n-1;i++) {
    
    for (int j=0;j<n-i-1;j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        }
    }
    }

  cout <<"After bubble sort: "<<endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

}
int main() {
  int arr[] = {14,43,28,51,20,8};
  int n = 6;
   cout << "Before bubble sort: " <<endl;
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout<<endl;
  bubble_sort(arr, n);
  return 0;
}


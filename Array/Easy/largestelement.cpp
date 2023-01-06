#include <bits/stdc++.h>
 
using namespace std;
int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr, n);
  cout << "The largest element in the array is: " << max << endl;
 
}
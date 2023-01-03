#include<bits/stdc++.h>

using namespace std;
void insertion_sort(int arr[], int n) {
  
  for (int i=1; i<n; i++) {
    int x=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>x){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=x; 
    }

  cout <<"After insertion sort: "<<endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

}
int main() {
  int arr[] = {15,26,97,45,10,7};
  int n = 6;
   cout << "Before insertion sort: " <<endl;
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout<<endl;
  insertion_sort(arr, n);
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int remove_duplicate(int a[],int n){
        // code here
       
        int i=0;
            for(int j=1;j<n;j++){
               if(a[i] !=a[j]){
                   i++;
                   a[i]=a[j];
                   //i++;
                   
               } 
            }
            return i+1;
         
        
    }
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 7, 7, 10};
    int n = 8;
    int ans = remove_duplicate(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < ans; i++) {
    cout << arr[i] << " ";}
}
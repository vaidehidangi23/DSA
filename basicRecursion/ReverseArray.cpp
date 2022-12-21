#include<iostream>
using namespace std;
void reverse(int s[],int n,int i){
    int j = n-i-1;
    
        if(i>j){
            
             return;
             
        }
    
        swap(s[i],s[j]);
        //i++;
            
        
        reverse(s,n,i+1);
       
            
}



int main(){
int s[5]={1,2,3,4,5};
reverse(s,5,0);
for(int i=0;i<5;i++){
    cout<<s[i];
}
           


      
}
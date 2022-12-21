#include<iostream>
using namespace std;
void printName(int i,int n){
    
        if(i>n){
             return;
        }
    printName(i+1,n);
        cout<<"vaidehi";
}
int main(){
printName(0,5);


      
}
#include <iostream>
using namespace std;
int printSum(int n)
{

     /* if(i<1){
          cout<<s;
           return;

      }
      printSum(i-1,s+i);

      */
     if (n == 0)
     {
          return 0;
     }
     return n + printSum(n - 1);
}
int main()
{
     cout << printSum(5);
}
#include <iostream>
using namespace std;
int factorial(int i, int s)
{

  if (i < 1)
  {
    cout << s;
    return 1;
  }
  factorial(i - 1, s * i);

  /* if(n==1){
    return 1;
    }
    return n*printSum(n-1);
    */
}
int main()
{
  factorial(5, 1);
}
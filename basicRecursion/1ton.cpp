#include <iostream>
using namespace std;
void printName(int i, int n)
{

    if (i > n)
    {
        return;
    }
    cout << i; // recursion
    printName(i + 1, n);
    // cout<<i(backtracking)
}
int main()
{
    printName(0, 5);
}
#include <iostream>
using namespace std;
void printName(int i, int n)
{

    if (i < 0)
    {
        return;
    }

    cout << i; // recursion
    printName(i - 1, n);

    // cout<<i(backtracking)
}

int main()
{
    printName(5, 5);
}
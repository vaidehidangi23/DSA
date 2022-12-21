#include <iostream>
using namespace std;
void reverse(string s, int i)
{
    int j = s.size() - i - 1;

    if (i > j)
    {
        cout << s;
        return;
    }

    swap(s[i], s[j]);
    // i++;

    reverse(s, i + 1);
}

int main()
{
    string s = "vaidehi";
    reverse(s, 0);
}
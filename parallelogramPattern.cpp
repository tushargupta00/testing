#include <iostream>
using namespace std;

int main()
{
    int n;
    // cout << "enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        for (int j = n; j <= 2*n; j++)
        {
            cout << "*" <<" ";
        }
        cout << '\n';
    }
    return 0;
}

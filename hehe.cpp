#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int lim = (1 << n);
    for (int i = 0; i < lim; i++)
    {
        int dec = i;
        string str = "";
        for (int j = 0; j < arr.size(); j++)
        {
            int rem = dec % 2;
            dec = dec / 2;
            if (rem == 0)
            {
                str = "-\t" + str;
            }
            else
            {
                str = arr[arr.size() - 1 - j] + "\t" + str;
            }
        }
        cout << str << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define vect vector<int>
#define all(x) (x).begin(), (x).end()
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

#define debug(x) cout << #x <<" "; _print(x); cout << endl;
void _print(int t) {cout << t;}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;

    vector<int> arr(n);

    for (auto &var : arr)
    {
        cin >> var;
    }
    vector<int> index(n);

    for (auto &var : index)
    {
        cin >> var;
    }
    int original_idx=-1;
    int expected_idx=-1;
    int val=0;

    for (int i = 0; i < n; i++)
    {
        original_idx = expected_idx = i;
        val = index[i];
        
        if (original_idx == val)
        {
            continue;
        }
       
        if (index[index[i]] != i)
        {
            expected_idx--;
        }
        
        swap(arr[original_idx], arr[val]);
        swap(index[original_idx], index[val]);

        i = expected_idx;
    }

    return 0;
}
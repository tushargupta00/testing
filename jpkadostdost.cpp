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

#define debug(x)       \
    cout << #x << " "; \
    _print(x);         \
    cout << endl;
void _print(int t)
{
    cout << t;
}
template <class T>
void _print(vector<T> v)
{
    cout << "[ ";
    for (T i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]";
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &var:v){
        cin>>var;
    }
    sort(all(v),greater<int>());
    int maxy=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxy=max(maxy,v[i]*(i+1));
    }
    cout<<maxy<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
    return 0;
}
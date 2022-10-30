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

void solve()
{
    int n,k;
    cin>>n>>k;
    int change=0;
    int flag=false;
    if(k==0){
        if(k+n%4==0){
            cout<<"Off"<<endl;
        }
        else cout<<"On"<<endl;
    }    
    else{ 
        if(n==0||n%4==0){
            cout<<"On"<<endl;
        }else cout<<"Ambiguous"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) 
    {
        solve();
    }
    return 0;
}
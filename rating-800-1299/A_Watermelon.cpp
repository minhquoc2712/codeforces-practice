#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define pb push_back
#define fi first 
#define se second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const int INF = 1e9 + 7;
const ll INFL = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int w;
    cin >> w;

    if (w % 2 == 0 && w >= 4) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}
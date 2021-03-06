//In The Name Of God
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<string> vs;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vvi> vvvi;
typedef vector<vvvi> vvvvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef vector<vvii> vvvii;
typedef vector<vector<viii>> vvviii;
typedef vector<vector<iii>> vviii;
typedef set<int> si;
typedef vector<si> vsi;
typedef pair<double, double> dd;
typedef vector<dd> vdd;

#define inf 1000000000
#define eps 1e-9

int main() {
    ios::sync_with_stdio(0);
    ll x, tmp;
    while(cin >> x) {
        vector<ll> pol;
        cin.get();
        string str; getline(cin, str);
        stringstream ss(str);
        while(ss >> tmp) pol.push_back(tmp);
        //horner's method
        ll ans = pol[0] * (pol.size() - 1);
        for(int i = 1; i < pol.size() - 1; i++)
            ans = pol[i] * (pol.size() - i - 1) + x * ans;
        cout << ans << endl;
    }


    return 0;
}
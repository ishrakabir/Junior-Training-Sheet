#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned ll;
using ld = long double;
using pi = pair<int, int>;
using pii = pair<ll, ll>;
using vi = vector<int>;
using vii = vector<ll>;
using vip = vector<pair<int, int>>;

const int MAX_N = 1e5 + 1;
const ll mod = 1e9 + 7;
const ll INF = 1e9;

#define ci cin
#define co cout

#define PI 3.141592653589793238
#define w(n) while (n--)
#define fir first
#define sec second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define loop(i, n, x) for (int i = n; i < x; i++)
#define sz(a) ((int)(a).size())
#define st(x) sort(x.begin(), x.end())
#define For(n, x) for (int i = 1; i <= x; i++)
#define ite iterator it
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test     \
    ll t;        \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
#define in insert
#define el endl

void solve()
{

    int t;
    cin >> t;
    w(t)
    {
        string s;
        cin >> s;
        int r = 0, g = 0, b = 0;
        int flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'r')
                r++;
            else if (s[i] == 'g')
                g++;
            else if (s[i] == 'b')
                b++;
            if (s[i] == 'R')
            {
                if (r >= 1)
                {
                    r--;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (s[i] == 'G')
            {
                if (g >= 1)
                {
                    g--;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (s[i] == 'B')
            {
                if (b >= 1)
                {
                    b--;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}

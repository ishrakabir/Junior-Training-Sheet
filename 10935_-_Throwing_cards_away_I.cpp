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

    while (1)
    {
        ll n;
        cin >> n;
        if (n == 0)
            {
                break;
            }

        queue<int> gquiz;
        for (int i = 1; i <= n; i++)
        {

            gquiz.push(i);
        }
        // while (!gquiz.empty())
        // {
        //     cout << gquiz.front() << " ";
        //     gquiz.pop();
        // }
        vector<ll> v;
        while (!gquiz.empty())
        {
            // cout<<gquiz.front()<<" ";
            v.push_back(gquiz.front());
            gquiz.pop();
            gquiz.push(gquiz.front());
            gquiz.pop();
        }
        cout << "Discarded cards:";
        for (int i = 0; i < v.size() - 1; i++)
        {
            cout<<" "<<v[i];
            if(i!=v.size()-2)
            {
                cout<<",";
            }
        }
        cout << el;
        cout << "Remaining card: " << v[v.size() - 1] << el;
    }
}

int main()
{
    fast;
    solve();
    //     test;
}

/*+-------------+------------+-------------------------------------+
|  Full name  | ID Student |               Contact               |
+-------------+------------+-------------------------------------+
| Lâm Gia Phú | 21280104   | Phone: 0767900668                   |
|             |            | Mail: 21280104@student.hcmus.edu.vn |
+-------------+------------+-------------------------------------+*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define pb push_back
#define pq priority_queue

#define fa_i(a, b) for (ll i = a; i < (b); i++)
#define f0_i(a) for (ll i = 0; i < (a); i++)
#define fa_j(a, b) for (ll j = a; j < (b); j++)
#define f0_j(a) for (ll j = 0; j < (a); j++)

const ll MOD = 1e9 + 7;
const ll mod = 998244353;
const ll M = 2e5 + 10;
const ll N = 2e5 + 10;
const double eps = 1e-12;

inline ll read()
{
    ll x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x * f;
}
bool MI(ll x)
{
    return x > 0 and (x & (x - 1)) == 0;
}
ll AA(ll n, ll m)
{
    ll tmp = 1;
    for (ll i = n - m + 1; i <= n; i++)
    {
        tmp *= i;
    }
    return tmp;
}
ll CC(ll n, ll m)
{
    if (n < m)
        return 0;
    m = min(m, n - m);
    ll res = 1;
    for (ll i = n; i >= (n - m + 1); i--)
        res *= i;
    for (ll i = 2; i <= m; i++)
        res /= i;
    return res;
}
long long ksm(long long b, long long p)
{
    long long res = 1;
    while (p != 0)
    {
        if ((p & 1) != 0)
        {
            res = res * b;
        }
        b = b * b;
        p >>= 1;
    }
    return res;
}
long long ksmm(long long b, long long p, long long k)
{
    b %= k;
    long long res = 1;
    while (p > 0)
    {
        if (p & 1)
            res = res * b % k;
        b = b * b % k;
        p >>= 1;
    }
    return res;
}
bool isPrime(ll num)
{
    if (num == 1)
        return 0;
    if (num == 2 || num == 3)
        return 1;
    if (num % 6 != 1 && num % 6 != 5)
        return 0;
    ll tmp = sqrt(num);
    for (ll i = 5; i <= tmp; i += 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    return 1;
}
ll Inv(ll x, ll mod)
{
    return ksmm(x, mod - 2, mod);
}
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}
ll lcm(ll x, ll y)
{
    return x / gcd(x, y) * y;
}

bool cmp(ll a, ll b)
{
    return a > b;
}

bool checkNum(vector <ll> a, ll num){
    f0_i(a.size()){
        if(a[i] == num)
            return true;
    }
    return false;
}
int main(){
    ll n;

    cin >> n;
    vector <ll> a(n);
    f0_i(n){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll sum =0;
    f0_i(n){
        sum += a[i];
    }
    ll O = a[n-1];

    f0_i(n-1)
    {
        O -= a[i];
        if(O<0)
            O = 0;
        
    }

    cout<<sum + O;
}
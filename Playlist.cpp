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

#define fa_i(a, b) for (int i = a; i < (b); i++)
#define f0_i(a) for (int i = 0; i < (a); i++)
#define fa_j(a, b) for (int j = a; j < (b); j++)
#define f0_j(a) for (int j = 0; j < (a); j++)

const int MOD = 1e9 + 7;
const int mod = 998244353;
const int M = 2e5 + 10;
const int N = 2e5 + 10;
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
bool MI(int x)
{
    return x > 0 and (x & (x - 1)) == 0;
}
int AA(int n, int m)
{
    int tmp = 1;
    for (int i = n - m + 1; i <= n; i++)
    {
        tmp *= i;
    }
    return tmp;
}
int CC(int n, int m)
{
    if (n < m)
        return 0;
    m = min(m, n - m);
    int res = 1;
    for (int i = n; i >= (n - m + 1); i--)
        res *= i;
    for (int i = 2; i <= m; i++)
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
int Inv(int x, int mod)
{
    return ksmm(x, mod - 2, mod);
}
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}
int lcm(int x, int y)
{
    return x / gcd(x, y) * y;
}

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    // int n;
    // cin>>n;
    // vector<ll> k(n);
    // map <ll,ll> m;
    // f0_i(n){
    //     cin>>k[i];
    //     m[i] = k[i];
    // }

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = 0, max_len = 0, curr_len = 0;
    map<int, int> freq;
    while (j < n)
    {
        if (freq.find(arr[j]) == freq.end() || freq[arr[j]] == 0)
        {
            freq[arr[j]]++;
            curr_len++;
            max_len = max(max_len, curr_len);
            j++;
        }
        else
        {
            curr_len--;
            freq[arr[i]]--;
            i++;
        }
        //cout<<" i : "<< i << " j : "<< j << " max len: "<< max_len <<" curr len: "<<curr_len<< " arr[j] : " << arr[j]<<endl;
    }
    cout << max_len;
    return 0;
}
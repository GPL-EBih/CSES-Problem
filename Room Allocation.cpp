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
    int n;
    cin>>n;
    vector <pair <pair<int, int >, int> > customers(n);
   
    f0_i(n){
        cin>> customers[i].first.first >> customers[i].first.second;
        customers[i].second = i;
    }
    
    sort(customers.begin(), customers.end());
    vector <int> roomAssigned (n,-1);
    int roomId = 1;
    priority_queue<pair <int,int>, vector <pair<int,int>>, greater<pair<int,int> > > rooms;

    f0_i(n){
        if(rooms.size()==0)
        {
            roomAssigned[customers[i].second] = roomId++;
            rooms.push(make_pair(customers[i].first.second, roomId-1));
        }
        else{
            if(rooms.top().first < customers[i].first.first){
                roomAssigned[customers[i].second] = rooms.top().second;
                pair <int,int> x = rooms.top();
                rooms.pop();
                rooms.push(make_pair(customers[i].first.second, x.second));

            }
            else{
                roomAssigned[customers[i].second] = roomId++;
                rooms.push(make_pair(customers[i].first.second,roomId -1));
            }
        }
    }
    cout<<roomId-1<<" "<<endl;
    f0_i(n){
        cout<<roomAssigned[i]<<" ";
    }
    



}

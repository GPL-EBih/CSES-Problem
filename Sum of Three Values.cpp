#include <iostream>
#include <vector>
using namespace std;

int main() {
    typedef long long ll; // Define the 'll' type

    ll n, x;
    cin >> n;
    cin >> x;

    vector<ll> a(n);
    vector<ll> p;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        sum = 0; // Reset sum for each iteration
        p.clear(); // Clear the vector 'p' for each iteration

        for (int j = i; j < n; ++j) {
            sum += a[j];
            p.push_back(j);

            if (sum == x) {
                cout << "size: " << p.size() << endl;
                for (int k = 0; k < p.size(); ++k) {
                    cout << p[k] << " ";
                }
                return 0;
            }

            if (sum > x) {
                sum -= a[j];
                p.pop_back();
            }
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}
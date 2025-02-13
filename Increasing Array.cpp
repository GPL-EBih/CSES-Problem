#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long  n;
    cin >> n;

    vector<long long> arr(n);
    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long moves = 0;

    for(long long i = 1; i < arr.size(); i++) {
        if(arr[i] < arr[i-1]) {
            moves += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout <<moves << endl;

    return 0;
}
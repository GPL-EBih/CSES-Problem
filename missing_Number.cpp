#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long arr[n];

    long long sum = 0;

    for(long long i = 0; i < n-1; ++i)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<n*(n+1)/2 - sum;
}
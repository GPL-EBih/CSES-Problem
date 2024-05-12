#include<iostream>
#include <iomanip> 
#define MOD 1000000007
using namespace std;
int main(){
    int n;
    cin>>n;
    int s = 1;
    if(n == 0)
    {
        cout<<"1";
        return 0;
    }
    for(int i = 1; i <= n ; ++i){
        s*=2;
        s = s % MOD;
    }
    cout<<fixed<<setprecision(0)<<s<<endl;

}
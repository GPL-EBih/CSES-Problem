#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1 || n == 0)
    {
        cout << "NO";
        return 0;
    }

    if (n % 4 == 0)
    {
        vector<int> a;
        vector<int> b;
        for (int i = 1; i < n + 1; ++i)
        {
            if (i % 4 == 1 || i % 4 == 0)
            {
                a.push_back(i);
            }
            else
            {
                b.push_back(i);
            }
        }
        cout << "YES" << endl;
        cout << a.size() << endl;
        for (int i = 0; i < a.size(); ++i)
            cout << a[i] << " ";
        cout << "\n";
        cout << b.size() << endl;
        for (int i = 0; i < b.size(); ++i)
            cout << b[i] << " ";
    }
    else if (n % 4 == 3)
    {
        vector<int> a;
        vector<int> b;
        for (int i = 1; i < n + 1; ++i)
        {
            if (i % 4 == 1 || i % 4 == 2)
            {
                a.push_back(i);
            }
            else
            {
                b.push_back(i);
            }
        }
        cout << "YES" << endl;
        cout << a.size() << endl;
        for (int i = 0; i < a.size(); ++i)
            cout << a[i] << " ";
        cout << "\n";
        cout << b.size() << endl;
        for (int i = 0; i < b.size(); ++i)
            cout << b[i] << " ";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
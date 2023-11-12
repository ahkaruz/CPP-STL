#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(5);
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << a.empty() << endl;
    return 0;
}
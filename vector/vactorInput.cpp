#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i = 0;
    vector<int> a;
    cin >> n;
    while (i < n)
    {
        int x;
        cin >> x;
        a.push_back(x);
        i++;
    }
    i = 0;
    while (i < n)
    {
        cout << a[i] << " ";
        i++;
    }
    return 0;
}

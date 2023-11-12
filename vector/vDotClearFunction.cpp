#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={2,4,6,8};
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    a.clear();
    cout<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a.size();
    return 0;
}
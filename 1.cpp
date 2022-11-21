

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int t=n;
    vector<int>v;
    while(t!=0)
    {
        int r=t%3;
        v.push_back(r);
        t=t/3;
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i];
    }
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    stringstream s(str);
    string w;
    vector<string>v;
    string str1;
    cin>>str1;
    while(s >> w)
    {
        v.push_back(w);
    }
    map<char,int>m;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].length();j++)
        {
            m[v[i][j]]+=1;
        }
    }
    cout<<m[str1[str1.length()-1]];
}

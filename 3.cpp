#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    map<int,int>m;
    m[3]=1,m[4]=1,m[7]=1;
    for(int i=1;;i++)
    {
        int f=1;
        int t=i;
        while(t!=0)
        {
            int r=t%10;
            if(m.find(r)!=m.end())
            {
                f=0;
            }
            t=t/10;
        }
        if(f==1)
        {
            count+=1;
        }
        if(count==n)
        {
            cout<<i;
            break;
        }
    }
}

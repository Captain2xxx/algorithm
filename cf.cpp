#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<string>
#include<iostream>
#include<vector>
#define maxn 200100
using namespace std;
int z[maxn];
vector<int> v(3,-1);
int main()
{
    string s;
    cin>>s;
    int r=0;
    v[0]=0;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        r=(r+s[i]-'0')%3;
        z[i+1]=z[i];
        if(v[r]!=-1)
        z[i+1]=max(z[i+1],z[v[r]+1]+1);
        v[r]=i;
    }
    printf("%d\n",z[len]);
    return 0;
}

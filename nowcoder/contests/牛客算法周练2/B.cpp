#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<map>
#include<set>
#define ll long long
#define F(i,a,b) for(int i=(a);i<=(b);i++)
#define mst(a,b) memset((a),(b),sizeof(a))
#define PII pair<int,int>
#define rep(i,x,y) for(auto i=(x);i<=(y);++i)
#define dep(i,x,y) for(auto i=(x);i>=(y);--i)
using namespace std;
template<class T>inline void rd(T &x) {
    x=0; int ch=getchar(),f=0;
    while(ch<'0'||ch>'9'){if (ch=='-') f=1;ch=getchar();}
    while (ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}
    if(f)x=-x;
}
const int inf=0x3f3f3f3f;
const int maxn=100050;
int T,n;
int a[maxn];
int f[4000],temp[4000];
vector<int> t;
int main()
{
    cin>>T;
    while(T--)
    {
        mst(f,0);
        cin>>n;
        rep(i,1,n) rd(a[i]);
        f[0]=1;
        rep(i,1,n)
        {
            t.clear();
            rep(j,0,3600)
            {
                if(f[j]) t.push_back((j+a[i])%3600);
            }
            for(int j=0;j<t.size();j++) f[t[j]]++;
            if(f[0]>1) break;
        }
        if(f[0]>1) puts("YES");
        else puts("NO");
    }
    return 0;
}
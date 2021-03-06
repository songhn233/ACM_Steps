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
const int maxn=300050;
int T;
ll n;
ll a[maxn],b[maxn],t[maxn];
ll sum=0;
int main()
{
    cin>>T;
    while(T--)
    {
        rd(n);
        sum=0;
        rep(i,1,n) rd(a[i]),rd(b[i]);
        rep(i,1,n) 
        {
            if(i==1)
            {
                sum+=max(0ll,a[1]-b[n]);
                t[1]=max(0ll,a[1]-b[n]);
            }
            else
            {
                sum+=max(0ll,a[i]-b[i-1]);
                t[i]=max(0ll,a[i]-b[i-1]);
            }
        }
        ll ans=a[1]+sum-t[1];
        rep(i,2,n) ans=min(ans,a[i]+sum-t[i]);
        cout<<ans<<endl;
    }
    return 0;
}
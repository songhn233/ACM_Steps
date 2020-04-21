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
const int maxn=100050;
ll n,m,T;
ll a[maxn];
int main()
{
	rd(T);
	while(T--)
	{
		rd(n),rd(m);
		rep(i,1,n) rd(a[i]);
		if(n>m)
		{
			puts("0");
			continue;
		}
		ll ans=1;
		rep(i,1,n) rep(j,i+1,n) ans=(ans*abs(a[i]-a[j]))%m;
		printf("%lld\n",ans);
	}
	
	return 0;
}
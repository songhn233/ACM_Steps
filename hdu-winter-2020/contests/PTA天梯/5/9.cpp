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
using namespace std;
template<class T>inline void read(T &x) {
    x=0; int ch=getchar(),f=0;
    while(ch<'0'||ch>'9'){if (ch=='-') f=1;ch=getchar();}
    while (ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}
    if(f)x=-x;
}
const int inf=0x3f3f3f3f;
const int maxn=50050;
int n,m,q,vis[maxn];
PII e[maxn];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		read(x),read(y);
		e[i]=make_pair(x,y);
	}
	cin>>q;
	while(q--)
	{
		int k;read(k);
		memset(vis,0,sizeof(vis));
		for(int i=1;i<=k;i++)
		{
			int x;read(x);
			vis[x]=1;
		}
		int flag=1;
		for(int i=1;i<=m;i++)
		{
			if(vis[e[i].first]||vis[e[i].second]) continue;
			else flag=0;
		}
		if(flag) puts("YES");
		else puts("NO");
	}
	return 0;
}

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
const int maxn=1000050;
int n,tire[maxn][30],num;
string s;
void insert(string s)
{
	int p=0;
	for(int i=0;i<s.size();i++)
	{
		if(tire[p][s[i]-'a']) p=tire[p][s[i]-'a'];
		else
		{
			tire[p][s[i]-'a']=++num;
			p=num;
		}
	}
}
int main()
{
	while(~scanf("%d",&n))
	{
		num=0;
		int maxx=0;
		memset(tire,0,sizeof(tire));
		for(int i=1;i<=n;i++)
		{
			cin>>s;
			insert(s);
			maxx=max(maxx,(int)s.size());
		}
		cout<<2*num+n-maxx<<endl;
	}
	return 0;
}


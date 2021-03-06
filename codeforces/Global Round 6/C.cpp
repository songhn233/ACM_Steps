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
const int maxn=505;
ll n,m,a[maxn][maxn];
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
int main()
{
  cin>>n>>m;
  if(n==m&&n==1)
  {
    puts("0");
    return 0;
  }
  if(n==1)
  {
    for(int i=1;i<=m;i++) cout<<i+1<<" ";
    cout<<endl;
    return 0;
  }
  if(m==1)
  {
    for(int i=1;i<=n;i++) cout<<i+1<<endl;
    return 0;
  }
  for(int i=1;i<=m;i++) a[1][i]=i+1;
  for(int i=2;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
      a[i][j]=(m+i)*a[1][j];
    }
  }
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
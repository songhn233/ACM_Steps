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
ll n,x;
ll T;
ll a[maxn];
ll s[maxn];
int main()
{
    cin>>T;
    while(T--)
    {
        cin>>n>>x;
        rep(i,1,n) rd(a[i]);
        sort(a+1,a+n+1);
        reverse(a+1,a+n+1);
        rep(i,1,n) s[i]=s[i-1]+a[i];
        ll ans=0;
        rep(i,1,n)
        {
            if(s[i]>=i*x) ans=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}
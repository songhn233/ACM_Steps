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
ll T,n;
int main()
{
    cin>>T;
    while(T--)
    {
        cin>>n;
        ll t1=0,t2=0;
        for(ll i=1;i<=((n/2)-1);i++) t1+=(1ll<<i);
        t1+=(1ll<<n);
        for(ll i=n/2;i<n;i++) t2+=(1ll<<i);
        cout<<t1-t2<<endl;
    }
    return 0;
}
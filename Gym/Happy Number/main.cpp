#include<bits/stdc++.h>
using namespace std;

#define NL '\n'
#define C char
#define D double
#define F float
#define S string
#define sz(x) x.size()
#define INF LONG_LONG_MAX
#define PI (2.0*acos(0.0))
#define sfi(x) scanf("%d",&x)
#define sfi2(x,y) scanf("%d %d",&x,&y)
#define sfi3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sfl(x) scanf("%lld",&x)
#define sfl2(x,y) scanf("%lld %lld",&x,&y)
#define sfl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define sfd(x) scanf("%lf",&x);
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(max3(a,b,c),d)
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(a,min3(b,c,d))
#define mem(ara,val) memset(ara,val,sizeof(ara))
#define READ freopen("input.txt","r",stdin)
#define WRITE freopen("output.txt","w",stdout)
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

/*LL gcd(LL a,LL b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
LL lcm(LL a,LL b)
{
    return a/gcd(a,b)*b;
}*/

int convert(S s)
{
    int sum = 0;
    for(int i=0; i<sz(s); i++)
    {
        int x = s[i] - '0';
        sum += (x*x);
    }
     if(sum==1)
     {
            cout<<"HAPPY";
            return 0;
     }
     else if(sum>1 && sum<10)
     {
         cout<<"UNHAPPY";
         return 0;
     }
     else
     {
         stringstream sso;
        sso << sum;
            S s;
            sso >> s;
         convert(s);
     }
}
int main()
{
    S s;
    cin>>s;

    if(sz(s)==1 && s[0]=='1')
        cout<<"HAPPY";

    else
    {
        convert(s);
    }
}

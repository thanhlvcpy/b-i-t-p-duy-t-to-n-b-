#include <bits/stdc++.h>

using namespace std;
long n,a[2000001],max1;
void nhap()
{
    //freopen("thidau.inp","r",stdin);
    //freopen("thidau.out","w",stdout);
    cin>>n;
    for(long i=1;i<=n;i++) cin>>a[i];
}
void timmax()
{
    max1=a[1];
    for(long i=2;i<=n;i++) max1=max(max1,a[i]);
}
void xl()
{
    timmax();long maxd=0;
    for(long i=1;i<=max1;i++)
    {
        long d=0,d1=0;
        for (long j=1;j<=n;j++)
           if (a[j]%i==0) d1++;

        if (d1>=2)
         for (long j=1;j<=n;j++)
           if (a[j]%i==0) d+=i;

        if (d>maxd) maxd=d;
    }
    cout<<maxd;
}
int main()
{
    nhap();
    xl();
    return 0;
}
;
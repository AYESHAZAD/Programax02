#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main()
{
    int t,r1,r2,h,p,c=0;
    scanf("%d",&t);
    while(t--)
    {
        double rr,v;
        c++;
        cin>>r1>>r2>>h>>p;
        rr=r2+(r1-r2)*(p/(double)h);
        v=(1/3.0)*PI*p*((rr*rr)+(r2*r2)+(rr*r2));

        printf("Case %d: %lf\n",c,v);

    }
    return 0;
}

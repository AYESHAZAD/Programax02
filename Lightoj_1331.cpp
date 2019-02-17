#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int t,c=0;
    double r1,r2,r3,A,B,C,area,area1,area2,x,y,z,s,X,Y,Z;
    scanf("%d",&t);

    while(t--)
    {
        cin>>r1>>r2>>r3;
        c++;
        x=r2+r3;
        y=r1+r3;
        z=r1+r2;
        s=(x+y+z)/2.0;
        X=acos(((y*y)+(z*z)-(x*x))/(2.0*y*z));
        Y=acos(((x*x)+(z*z)-(y*y))/(2.0*x*z));
        Z=acos(((x*x)+(y*y)-(z*z))/(2.0*x*y));


        area1=sqrt(s*(s-x)*(s-y)*(s-z));
        area2=((0.5)*((r1*r1*X)+(r2*r2*Y)+(r3*r3*Z)));
        area=area1-area2;
        printf("Case %d: %lf\n",c,area);


    }
    return 0;
}

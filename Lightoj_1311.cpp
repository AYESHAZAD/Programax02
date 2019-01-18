#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    double v1,v2,v3,a1,a2,t1,t2,time,d1,d2;
    scanf("%d",&t);
    while(t--)
    {  c++;
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=v1/a1;
        t2=v2/a2;

        d1=((v1*v1)/(2*a1))+((v2*v2)/(2*a2));

        if(t1>t2)
            time=t1;
        else
            time=t2;

        d2=time*v3;

        printf("Case %d: %lf %lf\n",c,d1,d2);
    }
    return 0;
}

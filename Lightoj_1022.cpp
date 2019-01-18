#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define pi 2 * acos(0.0)
int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        c++;
    double x,y,z,r;
    scanf("%lf",&r);
    x=pi*r*r;
    y=4*r*r;
    z=y-x;
    printf("Case %d: %0.2lf\n",c,z);


    }
    return 0;
}


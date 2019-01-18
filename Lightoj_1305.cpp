#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {  c++;
        int x1,x2,x3,x4,y1,y2,y3,y4,area,ans;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        x4=x3-(x2-x1);
        y4=y3-(y2-y1);
        area=abs(((x1*y2)-(x2*y1))+((x2*y3)-(x3*y2))+((x3*y4)-(x4*y3))+((x4*y1)-(x1*y4)));

        ans=area/2;
        printf("Case %d: %d %d %d\n",c,x4,y4,ans);
    }
    return 0;
}

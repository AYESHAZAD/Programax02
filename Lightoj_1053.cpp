#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p=0;
    scanf("%d",&t);
    while(t--)
    {   p++;
        int a,b,c,ans,x,y,z;
        scanf("%d%d%d",&a,&b,&c);

        if(a>b&&a>c)
        {
            x=a;
            y=b;
            z=c;
        }
         else if(b>a&&b>c)
        {
            x=b;
            y=a;
            z=c;
        }
        else if(c>a&&c>b)
        {
            x=c;
            y=a;
            z=b;
        }

        ans=sqrt(((y*y)+(z*z)));

        if(x==ans)
        {
            printf("Case %d: yes\n",p);
        }
        else
        {
             printf("Case %d: no\n",p);
        }
    }
    return 0;
}

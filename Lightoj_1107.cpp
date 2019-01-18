#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        int x1,y1,x2,y2,m;
        printf("Case %d:\n",c);
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&m);
        while(m--)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            if(x1<a&&y1<b&&x2>a&&y2>b)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }
    return 0;
}

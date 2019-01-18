#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        int sum=0,x,n;
        c++;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            if(x>=0)
            {
                sum+=x;
            }
        }

        printf("Case %d: %d\n",c,sum);

    }
    return 0;
}



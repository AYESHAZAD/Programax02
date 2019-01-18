#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int x,y,z;
        x=n;

        if(x%2==0)
        {
            y=x-(x/2);
            printf("%d %d\n",y,y);
        }

        else
        {
            y=x/2;
            z=y+x%2;
            printf("%d %d\n",y,z);
        }
    }

    return 0;
}

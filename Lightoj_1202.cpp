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
        long long r1,r2,c1,c2,a,b;

        scanf("%lld%lld%lld%lld",&r1,&c1,&r2,&c2);
        a=abs(r1-r2);
        b=abs(c1-c2);

        if(a==b)
            printf("Case %d: 1\n",c);
        else if(a%2==b%2)
            printf("Case %d: 2\n",c);

        else
            printf("Case %d: impossible\n",c);
    }
    return 0;
}

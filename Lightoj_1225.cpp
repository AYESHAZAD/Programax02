#include<bits/stdc++.h>
using namespace std;

long long func(long long n)
{  long long sum=0;
    while(n>0)
    {
        sum=sum*10+(n%10);
        n=n/10;
    }
    return sum;
}

int main()
{
    int t,c=0;
    long long n;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        long long x;
        scanf("%lld",&n);


        x=func(n);

        if(x==n)
        printf("Case %d: Yes\n",c);

        else
            printf("Case %d: No\n",c);

    }
    return 0;
}

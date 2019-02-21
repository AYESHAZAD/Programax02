#include<bits/stdc++.h>
using namespace std;

long long func(long long x)
{
    long long cnt=0;
    while(x>0)
    {
        if(x%2==1)
            cnt++;
        x=x/2;
    }

    return cnt;
}




int main()
{
    int t;
    long long n,z,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        c++;
        z=func(n);
        if(z%2==0)
        printf("Case %d: even\n",c);

        else
        printf("Case %d: odd\n",c);

    }
    return 0;

}

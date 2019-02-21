#include<bits/stdc++.h>
using namespace std;

long long Harmo(int n )
{
    long long res=0;
    int s=sqrt(n);
    for(int i=1; i<=s; i++)
    {
        res+=(n/i);
        int x=n/i;
        int y=n/(i+1);

        if(x>y)
            res+=(x-y)*i;
    }
    if(s==(n/s))
        res-=s;

    return res;
}



int main()
{
    int t,n,c=0;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        scanf("%d",&n);
        printf("Case %d: %lld\n",c,Harmo(n));
    }
    return 0;
}

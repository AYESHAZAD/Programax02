#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll prime[670000] , nprime;
bool mark[10000001];



void sieve(ll n)
{
   ll i,j,limit=sqrt(n*1)+2;
    mark[1]=1;

    for(i=4; i<=n; i+=2)
        mark[i]=1;

    prime[nprime++]=2;

    for(i=3; i<=n; i++)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;

            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }

}


ll p_fact (ll a)
{
     ll p=1 ,q;
    for(int i = 0; prime[i] <= sqrt(a); i++)
    {
        q = 0;
        while(a%prime[i] == 0)
        {
            q++;
            a =a/prime[i];
        }
        p = p*(q + 1);

    }
    if(a>1)
    {
        p=p*2;

    }
    return p-1;
}




int main()
{
    int t,c=0;
    sieve(10000000);

    scanf("%d",&t);
    while(t--)
    {
        long long int n,m;
        scanf("%lld",&n);

        m=p_fact(n);
        c++;
        printf("Case %d: %lld\n",c,m);




    }
    return 0;
}

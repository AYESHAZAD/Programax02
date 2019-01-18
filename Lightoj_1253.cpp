#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k,c=0;
    scanf("%d",&t);
    while(t--)
    {
        long long x,sum=0;
        int cnt=0;
        c++;
        scanf("%d",&k);

        for(int i=0; i<k; i++)
        {
            scanf("%lld",&x);

            if(x==1)
                cnt++;

            sum=sum^x;
        }

        if(cnt!=k)
        {
            if(sum==0)
                printf("Case %d: Bob\n",c);


            else
                printf("Case %d: Alice\n",c);
        }

        else
        {
            if(cnt%2==0)
                printf("Case %d: Alice\n",c);


            else
                printf("Case %d: Bob\n",c);
        }
    }
    return 0;
}

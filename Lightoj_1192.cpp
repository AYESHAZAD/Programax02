#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k,c=0;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        long long a,b,z,sum=0;
        scanf("%d",&k);
        for(int i=0;i<k;i++)
        {
            scanf("%d%d",&a,&b);
            z=b-(a+1);
            sum^=z;
        }

        if(sum==0)
       printf("Case %d: Bob\n",c);

       else
         printf("Case %d: Alice\n",c);
    }
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n,c=0;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        long long a,sum,res=0,arr[55];
        scanf("%d%d",&m,&n);
        for(int i=0; i<m; i++)
        {
            sum=0;
            for(int j=0; j<n; j++)
            {
                scanf("%lld",&a);
                sum+=a;
            }
            res^=sum;

        }

        if(res==0)  printf("Case %d: Bob\n",c);

        else  printf("Case %d: Alice\n",c);


    }

    return 0;

}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[105],b[105],c=0;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        int z,sum=0;
        scanf("%d",&n);

        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int j=0; j<n; j++)
        {
            scanf("%d",&b[j]);
        }

        for(int i=0; i<n; i++)
        {
            z=b[i]-(a[i]+1) ;
            sum=sum^z;
        }

        if(sum==0)
            printf("Case %d: black wins\n",c);

        else
            printf("Case %d: white wins\n",c);

    }

    return 0;

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0,n;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        int arr[55],p=0,q,s=0;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
         q=2;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>q)
            {
                s+=ceil((arr[i]-q)/5.0);
                q=arr[i];
            }
        }


        printf("Case %d: %d\n",c,s);


    }

    return 0;
}

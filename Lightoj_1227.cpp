#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0,n,p,q,arr[500];
   cin>>t;
    while(t--)
    {
        c++;

        cin>>n>>p>>q;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];

        }
        int sum1=0,x=0;
        sort(arr,arr+n);

        for(int i=1;i<=n;i++)
        {
            sum1=sum1+arr[i];

            if(i>p||sum1>q)
                break;
            x++;
        }
            printf("Case %d: %d\n",c,x);
        }

    return 0;
}

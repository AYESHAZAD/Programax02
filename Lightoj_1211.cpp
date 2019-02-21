#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,arr[500],a,b;
        c++;
        arr[1]=1;
        arr[2]=1;
        arr[3]=1;
        arr[4]=1001;
        arr[5]=1001;
        arr[6]=1001;


        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=3;j++)
            {
               scanf("%d",&a);

               if(arr[j]<a)
                arr[j]=a;
            }

            for(int j=4;j<=6;j++)
            {
                scanf("%d",&b);

                if(arr[j]>b)
                 arr[j]=b;
            }
        }

        if(arr[4]>arr[1] && arr[5]>arr[2]&& arr[6]>arr[3])
        {
            int x=(arr[4]-arr[1]) * (arr[5]-arr[2]) *(arr[6]-arr[3]);
            printf("Case %d: %d\n",c,x);
        }

        else
        {
             printf("Case %d: 0\n",c);
        }

    }
    return 0;
}

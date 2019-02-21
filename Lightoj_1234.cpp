#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define gama 0.57721566490

double arr[1000006];
int main()
{
    int t,c=0;
    scanf("%d",&t);

     double ans1=0;

    for(int i=1; i<=1000000; i++)
        {
            ans1+=(1/(double)i);
            arr[i]=ans1;
        }

    while(t--)
    {
        int  n;
        double ans2=0;
        scanf("%d",&n);
        c++;



        if(n<=1000000)
            printf("Case %d: %0.9lf\n",c,arr[n]);


        else
        {
          ans2=log(n+0.5)+gama;
          printf("Case %d: %0.9lf\n",c,ans2);

        }



    }
    return 0;
}

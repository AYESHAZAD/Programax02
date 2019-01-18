#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    long long n,m,i,j;
    scanf("%d",&t);
    while(t--)
    {

        long long sum1=0;
        c++;
        cin>>m>>n;

        sum1=(m/2)*n;
       printf("Case %d: %lld\n",c,sum1);
    }
    return 0;
}

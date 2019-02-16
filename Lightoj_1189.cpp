#include<bits/stdc++.h>
using namespace std;

long long arr[50];
long long func(long long n)
{
    if(n==0)
        return 1;

    return (n*func(n-1));
}







int main()
{
    int t,c=0;
    long long n;

    for(int i=0; i<=20; i++)
    {
        arr[i]=func(i);
    }

    scanf("%d",&t);
    while(t--)
    {

        scanf("%lld",&n);
        vector<int> v1;
        c++;
        for(int i=19; i>=0; i--)
        {
            if(n>=arr[i])
            {
                n=n-arr[i];
                v1.push_back(i);
            }
        }
        sort(v1.begin(),v1.end());
        printf("Case %d: ",c);
        if(n==0)
        {
            for(int j=0; j<v1.size()-1; j++)
            {
                printf("%d!+",v1[j]);
            }

            printf("%d!\n",v1[v1.size()-1]);
        }

        else
        {
            printf("impossible\n");
        }

    }

    return 0;
}

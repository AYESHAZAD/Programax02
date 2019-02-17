#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        long long n,ans=0;
        scanf("%lld",&n);
        c++;
        printf("Case %d:\n",c);
        while(n--)
        {
            string s;
            int x;
            cin>>s;
            if(s=="donate")
            {
                scanf("%d",&x);
                ans+=x;

            }

            else if(s=="report")
            {
                printf("%lld\n",ans);
            }
        }

    }

    return 0;
}

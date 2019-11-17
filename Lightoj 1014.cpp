#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        long long int  p,l,x;
        vector <int> v;
        scanf("%lld %lld",&p,&l);
        x=p-l;
        c++;
        printf("Case %d:",c);

        if(x<=l)
            printf(" impossible\n");

        else
        {
            for(int i=1; i<=sqrt(x); i++)
            {
                if(x%i==0)
                {
                    v.push_back(i);

                    if(x/i!=i)
                        v.push_back(x/i);
                }
            }

            sort(v.begin(),v.end());
            for(int i=0; i<v.size(); i++)
            {
                if(v[i]>l)
                    printf(" %d",v[i]);
            }


            printf("\n");

        }



    }

    return 0;
}

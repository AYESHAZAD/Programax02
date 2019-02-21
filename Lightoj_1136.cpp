#include<bits/stdc++.h>
using namespace std;

int func(int n)
{
    int ans=0;

    ans=(n/3)*2;

    if(n%3==2)
    {
        ans=ans+1;
    }

    return ans;
}




int main()
{
    int t,c=0;
    scanf("%d",&t);

    while(t--)
    {
        int  a,b,result;
       cin>>a>>b;

        c++;
        result=func(b)-func(a-1);

        printf("Case %d: %d\n",c,result);
    }
    return 0;
}

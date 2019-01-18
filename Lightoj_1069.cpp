#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0,a,b;
    scanf("%d",&t);
    while(t--)
    {
        int res=0;
        c++;
       scanf("%d%d",&a,&b);
       res=((abs(b-a)*4)+11+(a*4)+8);
       printf("Case %d: %d\n",c,res);

    }
    return 0;
}

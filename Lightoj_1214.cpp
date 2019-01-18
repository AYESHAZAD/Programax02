#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        string s1;
        long long b;
        cin>>s1>>b;
        c++;
        long long  res=0;
      // long long x=abs(b);

        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]!='-')
            {
                res=res*10+(s1[i]-48);
                res=res%b;
            }
        }

        if(res==0)
        {
            printf("Case %d: divisible\n",c);
        }
        else
        {
            printf("Case %d: not divisible\n",c);
        }

    }
    return 0;
}

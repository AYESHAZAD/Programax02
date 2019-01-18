#include<bits/stdc++.h>
using namespace std;

long long arr[1000000],n;

int bn_search1(int n,long long s)
{
    long long l,h,mid;
    l=1;
    h=n;
    while(l<=h)
    {
        mid=(l+h)/2;

        if(arr[mid]==s)
            return mid+1;

        else if(arr[mid]<s)
            l=mid+1;

        else if(arr[mid]>s)
            h=mid-1;

    }
    return l;
}

int bn_search2(int n,long long s)
{
    long long l=0,h=0,mid=0;
    l=1;
    h=n;

    while(l<=h)
    {
        mid=(l+h)/2;


        if(arr[mid]==s)
            return mid;

        else if(arr[mid]<s)
            l=mid+1;

        else if(arr[mid]>s)
            h=mid-1;

//cout<<h<<endl;

    }
    return l;
}


int main()
{
    int t,n,q,c=0;;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        scanf("%d%d",&n,&q);
        for(int i=1; i<=n; i++)
            scanf("%lld",&arr[i]);
        printf("Case %d:\n",c);
        while(q--)
        {
            long long a,b,x=0,y=0,z=0;
            scanf("%lld%lld",&a,&b);
            x=bn_search1(n,b);
            y=bn_search2(n,a);
            //cout<<x<<" "<<y<<endl;
            z=x-y;
            printf("%lld\n",z);


        }

    }

    return 0;
}
/*
1

5 6

1 4 6 8 10

0 5

6 10

7 100000

critical case
7 10
4 10
2 8
5 8
Output
Case 1:

2
3
2
2
4
3
2
*/


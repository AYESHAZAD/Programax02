#include <bits/stdc++.h>

using namespace std;
long long arr[10005];
long long fn(long long n)
{
     if(arr[n] != -1 )
        return arr[n];
    if(n <= 5)
    return arr[n];

    else
       return arr[n] = ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) ) % 10000007;
}
int main()
{
     long long t,n , p = 0;
  scanf("%lld",  &t);
    while(t--)
    {
       p++;

       memset(arr , -1, sizeof arr);

       scanf("%lld %lld %lld %lld %lld %lld %lld", &arr[0], &arr[1] ,&arr[2], &arr[3] , &arr[4], &arr[5] , &n);


        printf("Case %lld: %lld\n", p ,fn(n) %10000007);
}
}
